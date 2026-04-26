/*
  THERMOSPARK - Battery Thermal Runaway Identifier
  Team: IGNOVATORS
  Hackathon: ThermoSpark 2026

  Logic: 
  1. Read MQ-2 Sensor on A0 (Gas/Vapor)
  2. Read NTC Thermistor on A1 (Temperature)
  3. Send data over Serial as: gasValue,tempValue
  4. Control IRLZ44N MOSFET on D7 (Kill Switch) 
     - Active LOW to cut power (Isolation)
     - HIGH to allow power (Normal)
*/

const int GAS_PIN = A0;
const int TEMP_PIN = A1;
const int KILL_SWITCH_PIN = 7;

// Thresholds
const int GAS_CRITICAL = 700;
const float TEMP_CRITICAL = 65.0;

void setup() {
  Serial.begin(9600);
  pinMode(KILL_SWITCH_PIN, OUTPUT);
  digitalWrite(KILL_SWITCH_PIN, HIGH); // System starts in SAFE mode
}

void loop() {
  // 1. Read Sensors
  int gasValue = analogRead(GAS_PIN);
  int tempAnalog = analogRead(TEMP_PIN);
  
  // Convert analog to Celsius (Simple approximation for NTC)
  float voltage = tempAnalog * (5.0 / 1023.0);
  float tempValue = (voltage - 0.5) * 100.0; // Example linear conversion

  // 2. Kill Switch Logic
  if (gasValue >= GAS_CRITICAL || tempValue >= TEMP_CRITICAL) {
    digitalWrite(KILL_SWITCH_PIN, LOW); // Trigger Kill Switch (Isolate)
  } else {
    digitalWrite(KILL_SWITCH_PIN, HIGH); // Keep Safe (Conduct)
  }

  // 3. Serial Output for Dashboard
  // Format: gasValue,tempValue
  Serial.print(gasValue);
  Serial.print(",");
  Serial.println(tempValue);

  delay(500); // 500ms update rate as required
}
