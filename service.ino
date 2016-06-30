#include <ESP8266WebServer.h>
#include <ArduinoJson.h>
#include <Base64.h>

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
  </body>\
</html>",
    hr, min % 60, sec % 60
  );
  server.send ( 200, "text/html", temp );
}

char* decodeImage(char inputString[], unsigned int inputStringLength) {
  int decodedLength = Base64.decodedLength(inputString, inputStringLength);
  char* decodedString = (char*)malloc(decodedLength);
  Base64.decode(decodedString, inputString, inputStringLength);
  Serial.printf("%s",decodedString); 
  return decodedString;
}

void setupService() {
  server.on("/", handleRoot);

  // REST Service Endpoints follow

  // /value returns the current scale value
  server.on("/value", HTTP_GET, returnScaleValue);

  // /status returns the current status (ex. in ingredient step, with amount)
  server.on("/status", HTTP_GET, returnStatus);

  // /showingredient shows an igredient step and performs actions
  server.on("/showingredient", HTTP_POST, []() {
    // no arguments, return error
    if(server.args() == 0) return server.send(500, "text/plain", "BAD ARGS");
    // call payload function
    showIngredient();
  });

  // /showmanual shows a manual step and performs actions (like "stirring", "add ice")
  server.on("/showmanual", HTTP_POST, []() {
    // no arguments, return error
    if(server.args() == 0) return server.send(500, "text/plain", "BAD ARGS");
    // call payload function
    showManual();
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

void returnScaleValue() {
  StaticJsonBuffer<50> jsonBuffer;
  JsonObject& root = jsonBuffer.createObject();
  root["value"] = getScaleValue();
  int len = root.measureLength();
  char buffer[len];
  root.printTo(buffer, len);
  server.send(200, "application/json", buffer);
}

void returnStatus() {
  StaticJsonBuffer<50> jsonBuffer;
  JsonObject& root = jsonBuffer.createObject();
  root["value"] = getScaleValue();
  int len = root.measureLength();
  char buffer[len];
  root.printTo(buffer, len);
  server.send(200, "application/json", buffer);
}

void showIngredient(){
  // parse POST argument 0 as json
  String jsonText = server.arg(0);
  StaticJsonBuffer<200> jsonBuffer;
  JsonObject& root = jsonBuffer.parseObject(jsonText);
  const char* statustext = root["statustext"];
  const char* icon = root["icon"];
  const char* name = root["name"];
  int amount = root["amount"];
  const char* unit = root["unit"];

  // decoding icon
  char* iconBitmap = decodeImage(const_cast<char*>(icon), sizeof(const_cast<char*>(icon)));

  // TODO FIXME

  // finally releasing icon memory
  free(iconBitmap);

  // send json result data
  server.send(200, "application/json", prepareTestResponse());
}

void showManual(){
  // parse POST argument 0 as json
  String jsonText = server.arg(0);
  StaticJsonBuffer<200> jsonBuffer;
  JsonObject& root = jsonBuffer.parseObject(jsonText);
  const char* statustext = root["statustext"];
  const char* icon = root["icon"];
  const char* instructions = root["name"];

  // decoding icon
  char* iconBitmap = decodeImage(const_cast<char*>(icon), sizeof(const_cast<char*>(icon)));

  // TODO FIXME

  // finally releasing icon memory
  free(iconBitmap);

  // send json result data
  server.send(200, "application/json", prepareTestResponse());
}

