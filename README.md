# disturbing-the-peace-arduino-buzzer
# It's going down now on Arduino!
# Persona!!!

A passive buzzer melody of "It's going down now" by Azumi Takahashi for
Arduino UNO. Press a button and it plays.

Fan project: this repo only contains the melody transcribed as notes,
with no lyrics. All rights to the original song belong to its creator.

## Components
- Arduino UNO
- Breadboard
- Passive buzzer
- Push button
- 10 kΩ resistor
- Jumper wires

## Wiring

Passive buzzer
- Positive (+) leg → GND from Arduino
- Other leg → pin 8 from Arduino

Push button
- One leg → positive rail of the breadboard (5V)
- Other leg → pin 2 from Arduino
- 10 kΩ resistor in the same row as the pin 2 leg, going to the
  negative rail (GND). It works as a pull-down resistor.

Breadboard power
- Positive rail → Arduino 5V
- Negative rail → Arduino GND

## How to use
1. Build the circuit
2. Open the .ino file in the Arduino IDE
3. Select your board and port, then upload
4. Press the button and enjoy the melody
* If the IDE asks to create a folder for the sketch, click OK.


## Customize
- BPM: playback speed.
- Note frequencies: multiply by 2 to go up an octave,
  divide by 2 to go down.

## Notes
- The melody is stored in the melodia[] array as {note, duration} pairs.
- The button is read as HIGH when pressed (pull-down setup). If you wire
  it between pin 2 and GND instead, use `INPUT_PULLUP` and check for `LOW`.

If you arrived here, hi! :D, I'm Iker, a persona fan, thanks for using my code
and follow me on Instagram, search me as Sellodegarantiaa :D
Instagram link: https://www.instagram.com/sellodegarantiaa/
