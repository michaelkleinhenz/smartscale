#include <ESP8266WebServer.h>
#include <ArduinoJson.h>

ESP8266WebServer server(80);

void handleNotFound() {
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += ( server.method() == HTTP_GET ) ? "GET" : "POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for ( uint8_t i = 0; i < server.args(); i++ ) {
    message += " " + server.argName ( i ) + ": " + server.arg ( i ) + "\n";
  }
  server.send ( 404, "text/plain", message );
}

void handleRoot() {
  char temp[400];
  int sec = millis() / 1000;
  int min = sec / 60;
  int hr = min / 60;
  snprintf ( temp, 400,
"<html>\
  <head>\
    <meta http-equiv='refresh' content='5'/>\
    <title>ESP8266 Demo</title>\
    <style>\
      body { background-color: #cccccc; font-family: Arial, Helvetica, Sans-Serif; Color: #000088; }\
    </style>\
  </head>\
  <body>\
    <h1>Hello from ESP8266!</h1>\
    <p>Uptime: %02d:%02d:%02d</p>\
    <img src=\"/test.svg\" />\
  </body>\
</html>",
    hr, min % 60, sec % 60
  );
  server.send ( 200, "text/html", temp );
}

void setupService() {
  server.on("/", handleRoot);

  // REST Service Endpoints follow
  server.on("/test", HTTP_POST, []() {
    // no arguments, return error
    if(server.args() == 0) return server.send(500, "text/plain", "BAD ARGS");
    // call payload function
    testfunc();
  });
  
  server.onNotFound(handleNotFound);
  server.begin();
  Serial.println("HTTP server initialized..");
}

void loopService(void) {
  server.handleClient();
}

// payload functions follow

char* prepareTestResponse() {
  // init
  StaticJsonBuffer<500> jsonBuffer;
  JsonObject& root = jsonBuffer.createObject();

  // set data
  root["sensor"] = "gps";
  root["time"] = 1351824120;
  JsonArray& data = root.createNestedArray("data");
  data.add(48.756080, 6);  // 6 is the number of decimals to print
  data.add(2.302038, 6);   // if not specified, 2 digits are printed

  // serialize
  int len = root.measureLength();
  char buffer[len];
  root.printTo(buffer, len);
  return buffer;
}

void testfunc(){
  // parse POST argument 0 as json
  String jsonText = server.arg(0);
  StaticJsonBuffer<200> jsonBuffer;
  JsonObject& root = jsonBuffer.parseObject(json);
  const char* sensor = root["sensor"];
  long time          = root["time"];
  double latitude    = root["data"][0];
  double longitude   = root["data"][1];

  // send json result data
  server.send(200, "application/json", prepareTestResponse());
}

