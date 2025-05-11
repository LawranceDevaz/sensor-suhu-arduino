# LM35 Temperature Sensor Reader

This project reads analog temperature data from an LM35 sensor and displays the temperature in Celsius via the Serial Monitor.

## Components
- Arduino Uno/Nano
- LM35 Temperature Sensor

## Wiring
- LM35 VCC to 5V
- LM35 GND to GND
- LM35 OUT to A0

## Formula
Voltage (V) = analogRead * (5.0 / 1023.0)  
Temperature (°C) = Voltage * 100

## Behavior
- Temperature data is printed to Serial Monitor every second.
