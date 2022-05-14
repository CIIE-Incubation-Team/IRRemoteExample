#include <IRremote.h> // include the IRremote library
#define RECEIVER_PIN 7 // define the IR receiver pin
IRsend sender(RECEIVER_PIN); // create a receiver object of the IRrecv class

void setup() {
  Serial.begin(9600);
}
void loop() {
  sender.sendNEC(0x20DF8877,32);
  delay(5000);
}
