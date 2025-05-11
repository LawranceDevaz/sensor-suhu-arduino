# Button Controlled LED

This project controls an LED using a push button. Each press of the button toggles the LED on or off.

## Components
- Arduino Uno/Nano
- Push button
- 10kΩ resistor (for pull-down if needed)
- LED
- 220Ω resistor

## Wiring
- Button connected to digital pin 2 (with INPUT_PULLUP)
- LED anode to digital pin 13, cathode to GND (through 220Ω resistor)

## Behavior
- When button is pressed, the LED toggles its state (ON/OFF).
- Debouncing is handled with a 300ms delay.
