// myGpioApp.cpp
// This is my app to implement the MYGPIO class by controlling GPIO pins. 
// This program sets a GPIO pin as an output, turns it on, waits for 3 seconds,
// then turns it off.
// It also reads the status of another GPIO pin configured as input. An example
// invocation is ./myGpioApp

#include "myGpio.h"
#include <iostream>
#include <unistd.h> 
using namespace std;

int main(){
  MYGPIO gpioOut(60); // This is the LED
  MYGPIO gpioIn(46); // This is the button
  
  gpioOut.setDirection(OUT);
  gpioIn.setDirection(IN);
  
  //Turn the LED on for 3 seconds then off.
  gpioOut.setValue(HIGH);
  cout << "GPIO 60 set high" << endl;
  sleep(3);

  gpioOut.setValue(LOW);
  cout << "GPIO 60 set low" << endl;
  // Read button and print its status
  GPIO_VALUE inputStatus = gpioIn.getValue();
  cout << "GPIO 46 value is: " << inputStatus << endl;
  return 0;
}





