# Laser-Security-System-using-Arduino-Uno
This Laser Security System uses an Arduino Uno, Laser Diode (KY-008), and LDR (Light Dependent Resistor) to detect intrusions. When the laser beam is blocked, the Buzzer and LED are triggered as an alarm.

Components Required:
Arduino Uno

KY-008 Laser Diode

LDR (Light Dependent Resistor)

Buzzer

LED

10kΩ Resistor (for LDR circuit)

Jumper Wires & Breadboard

Circuit Connections:
LDR → One leg to A0 and the other leg to GND (with a 10kΩ pull-down resistor to 5V)

Laser Diode (KY-008) → +5V and GND

Buzzer → Pin 6 and GND

LED → Pin 7 and GND


Working:
The Laser Diode emits a beam onto the LDR.

If the beam is blocked, the LDR value drops below the threshold (300).

The Arduino detects the change and triggers the Buzzer & LED as an alarm.

Once the beam is restored, the alarm stops.
