#define LDR_PIN A0   // LDR connected to Analog pin A0
#define BUZZER 6     // Buzzer connected to Digital pin 6
#define LED 7        // LED connected to Digital pin 7
#define LASER 5      // Laser Diode connected to Digital pin 5

void setup() {
    pinMode(LDR_PIN, INPUT);
    pinMode(BUZZER, OUTPUT);
    pinMode(LED, OUTPUT);
    pinMode(LASER, OUTPUT);
    
    digitalWrite(LASER, HIGH); // Turn on Laser
    Serial.begin(9600);
}

void loop() {
    int ldrValue = analogRead(LDR_PIN); // Read LDR sensor value
    Serial.println(ldrValue); // Print value to Serial Monitor

    if (ldrValue < 300) { // If beam is interrupted (Threshold value)
        digitalWrite(BUZZER, HIGH);  // Activate buzzer
        digitalWrite(LED, HIGH);     // Turn on LED
        Serial.println("Intruder Detected!");
    } else {
        digitalWrite(BUZZER, LOW);   // Deactivate buzzer
        digitalWrite(LED, LOW);      // Turn off LED
    }

    delay(200);
}
