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

Diagram reference image [here](https://github.com/kingston-hackSpace/SDCard/blob/main/SDCard_Diagram.jpg)

*Note: The digital pins in use are SPI, allowing fast communication with the SDCARD module.*

----
### CODE AND INSTRUCTIONS

- Insert The SD Card into the SD-Card Module (if you haven't done it already)
  
- Upload [this code](https://github.com/kingston-hackSpace/SDCard/blob/main/SDCARD_test/SDCARD_test.ino) to your Arduino Board

- Open Arduino's  Serial Monitor to check if the communication between Arduino and the SD Card Module is working properly. Your Serial Monitor should print the following message:
    ```
    Initializing SD Card...
    SD Card initialised successfully.
    ... Writing a text file to the SD Card : test.txt
    done. SD Card ready
    ```

See reference image [here]

- Done!
- 
  
