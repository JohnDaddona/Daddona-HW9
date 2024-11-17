// This is a CPP program that will turn on an LED when a push button is pressed
// and shuts it off when it is not pressed. The invocation would be ./buttonLED.
#include<iostream>
#include<string>
#include<fstream>
#include<unistd.h>
using namespace std;

#define LED_PATH "/sys/class/gpio/gpio60/value"
#define Button_PATH "/sys/class/gpio/gpio46/value"

int main(int argc, char* argv[]){
  int ButtonStatus;

  while(true){

  ifstream Button;
  ofstream LED;
  Button.open(Button_PATH);
  LED.open(LED_PATH);
  if(!Button.is_open() || !LED.is_open()){
    cerr << "Unable to use GPIO pins at this time" << endl;
    return 1;
  }
    Button >> ButtonStatus;
    cout << "The button status is " << ButtonStatus << endl;
    //control the led based on the status above
    LED << (ButtonStatus == 0 ? "1" : "0"); //Turn LED on or off
    LED.flush(); //make sure LED state is updated, discovered by chris in lab
    sleep(1);// dont read the status for .5 seconds for debouncing / flickering
    Button.clear();
    Button.close();
  }
return 0;
}
