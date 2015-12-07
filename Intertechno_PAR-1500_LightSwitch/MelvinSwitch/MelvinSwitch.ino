#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {

  // Transmitter is connected to Arduino Pin #10  
  mySwitch.enableTransmit(11);
  
  // Optional set pulse length.
  // mySwitch.setPulseLength(320);
  
}

void loop() {
  
  // Switch on:
  // Example TypeC_Intertechno
  // The first parameter represents the familycode (a, b, c, ... f)
  // The second parameter represents the group number
  // The third parameter represents the device number
  // 
  // In this example it's family 'a', group #1, device #1
  mySwitch.switchOn('a', 1, 1);

  delay(1000);
  
  // Switch off
  mySwitch.switchOff('a', 1, 1);
  
  // Wait another second
  delay(1000);
  
}
