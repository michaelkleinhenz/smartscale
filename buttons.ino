
int tsButton1 = 0;

void setupButtons() {
  pinMode(2, INPUT);
  pinMode(15, INPUT);
  pinMode(0, INPUT);
}

void loopButtons() {
  if (digitalRead(2)==HIGH) {
    tsButton1 = millis();
  }else
    tsButton1 = 0;
  if (millis()-tsButton1>1000) {
    Serial.println("Button 1 longpress!");    
    tsButton1 = 0;
  }
}
