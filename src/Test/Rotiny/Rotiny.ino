#define PO_LID_OPEN  5   // Open signal pin
#define PO_LID_CLOSE 6   // Close signal pin
#define PI_SWTCH_LID 14  // Limitswitch for "Lid Closed"

unsigned long lastMillis = 0;
int process              = 0;
bool SWTCH               = 0;
unsigned long lastSWTCH  = 0;

void setup() {
  Serial.begin(9600);
  pinMode(PO_LID_CLOSE, OUTPUT);
  pinMode(PO_LID_OPEN, OUTPUT);

  Serial.println("Starting Program");
}

void loop() {
  switch (process) {
    case 0:  // Open Lid
      digitalWrite(PO_LID_OPEN, HIGH);

      if (millis() - lastSWTCH >= 200) {
        lastSWTCH = millis();
        SWTCH     = digitalRead(PI_SWTCH_LID);
      }

      if (millis() - lastMillis >= 2 * 1000) {
        digitalWrite(PO_LID_OPEN, LOW);
        Serial.println("Closing the Lid (60s)");
        lastMillis = millis();

        process++;
      }
      break;

    case 1:
      digitalWrite(PO_LID_OPEN, LOW);
      digitalWrite(PO_LID_CLOSE, HIGH);

      if (millis() - lastSWTCH >= 200) {
        lastSWTCH = millis();
        SWTCH     = digitalRead(PI_SWTCH_LID);
      }
      if (SWTCH == HIGH) {
        Serial.println("OPENING THE LID");
        digitalWrite(PO_LID_CLOSE, HIGH);
        process--;
        lastMillis = millis();
      }
      break;

    default:
      digitalWrite(PO_LID_OPEN, LOW);
      digitalWrite(PO_LID_CLOSE, LOW);
      process = 0;
      break;
  }
}