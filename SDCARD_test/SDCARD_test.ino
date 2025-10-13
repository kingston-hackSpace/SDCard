/** 
SDCARD Module - testing communication

WIRING :
SDCARD MODULE 5V pin to the 5V pin on the Arduino UNO
SDCARD MODULE GND pin to the GND pin on the Arduino UNO
SDCARD MODULE CLK to pin 13  (pin 52 for Arduino MEGA)
SDCARD MODULE DO to pin 12 (pin 50 for Arduino MEGA)
SDCARD MODULE DI to pin 11  (pin 51 for Arduino MEGA)
SDCARD MODULE CS to pin 10  (pin 53 for Arduino MEGA)

**/
#include <SD.h>
 
File myFile;
 
void setup(){
  Serial.begin(9600); 
  Serial.print("Initializing SD card...");
  pinMode(10, OUTPUT);
 
  if (!SD.begin(10)) {
    Serial.println("initialization failed!");
    return;
  }
  Serial.println("initialization done.");
 
  // open the file. note that only one file can be open at a time,
  // so you have to close this one before opening another.
  myFile = SD.open("test.txt", FILE_WRITE);
 
  // if the file opened okay, write to it:
  if (myFile) {
    Serial.print("Writing to test.txt...");
    myFile.println("testing 1, 2, 3.");
	// close the file:
    myFile.close();
    Serial.println("done.");
  } else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
  }
}
 
void loop()
{
	// nothing happens after setup
}
