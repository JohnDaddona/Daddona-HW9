// myGPIO.cpp
// This is my implementation code for the MYGPIO class
// This class allows setting direction and value, toggling output, and reading
// the status of GPIO pins.

#include "myGpio.h"
#include <fstream>
#include <iostream>
#include <unistd.h>
using namespace std;

//Constructor that initializes the GPIO pin by appending the path based on the
//number provided
MYGPIO::MYGPIO(int number) : number(number) {
    path = "/sys/class/gpio/gpio" + to_string(number) + "/";
}

// Function to write to GPIO files
void MYGPIO::write(string path, string filename, string value) {
  ofstream fs(path + filename); // From lab, open the file stream for writing to
  //the LEDS.
  if (fs.is_open()) {
    fs << value;
    fs.close();
    }
  else {
    cerr << "Error writing to " << filename <<  endl;
  }
}
// This function converts the int to a string and calls the other write
// function.
void MYGPIO::write(string path, string filename, int value) {
  write(path, filename, to_string(value));
}

// Function to read from GPIO files
string MYGPIO::read(string path, string filename) {
  ifstream fs(path + filename);
  string value;
  if (fs.is_open()) {
    getline(fs, value);
    fs.close();
    }
  else {
    cerr << "Error reading from " << filename << endl;
    }
  return value;
}

// Set GPIO direction (input/output)
void MYGPIO::setDirection(GPIO_DIRECTION dir) {
    write(path, "direction", dir == IN ? "in" : "out");
}

// Get GPIO direction (returns IN or OUT)
GPIO_DIRECTION MYGPIO::getDirection() {
    return read(path, "direction") == "in" ? IN : OUT;
}

// Set GPIO value (LOW or HIGH) using the enum
void MYGPIO::setValue(GPIO_VALUE val) {
    write(path, "value", val == LOW ? 0 : 1);
    }

// Get GPIO value (returns LOW or HIGH)
GPIO_VALUE MYGPIO::getValue() {
    return stoi(read(path, "value")) == 0 ? LOW : HIGH;
    }

// Toggle GPIO output (switches between LOW and HIGH)
void MYGPIO::toggleOutput() {
    GPIO_VALUE currentValue = getValue();
        setValue(currentValue == LOW ? HIGH : LOW);
        }


// Destructor
MYGPIO::~MYGPIO() {
}
