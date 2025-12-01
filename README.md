# SD CARD

Most microcontrollers (such as the Arduino board) have extremely limited built-in storage. If your project involves any audio, video, graphics, data logging, etc., adding an SDCard module will be required.

The SD card module allows your microcontroller to communicate with an SD card via the SPI (Serial Peripheral
Interface) protocol.

It can used to interact with a 3.3V or 5V microcontrollers.

MORE INFO [here](https://learn.adafruit.com/adafruit-micro-sd-breakout-board-card-tutorial?view=all)

----
# TUTORIAL : WRITING FILES TO AN SD CARD USING ARDUINO
----
### HARDWARE

- SD Card module
- Micro SD card
- Arduino Uno
- Jumpers
- Breadboard

----
### WIRING

Connect the 5V pin to the 5V pin on the Arduino
Connect the GND pin to the GND pin on the Arduino
Connect CLK to pin 13 (pin 52 for Arduino MEGA)
Connect DO to pin 12 (pin 50 for Arduino MEGA)
Connect DI to pin 11 (pin 51 for Arduino MEGA)
Connect CS to pin 10 (pin 53 for Arduino MEGA)

Diagram reference image [here]

*Note: The digital pins in use are SPI, allowing fast communication with the SDCARD module.*
