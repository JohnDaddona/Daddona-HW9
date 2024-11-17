//Header file
// This is my header file defining MYGPIO class for controlling GPIO pins
// Allows me to set up a value and direction as well ans reading status.
#ifndef MYGPIO_H
#define MYGPIO_H
#include <string>
#include <fstream>
using namespace std;
enum GPIO_DIRECTION { IN, OUT };
enum GPIO_VALUE { LOW = 0, HIGH = 1 };

class MYGPIO {
 private:
   int number;
   string name, path;
   void write(string path, string filename, string value);
   void write(string path, string filename, int value);
   string read(string path, string filename);
   ofstream stream;
 public:
    MYGPIO(int number); //constructor
    int getNumber();
    void setDirection(GPIO_DIRECTION dir);
    GPIO_DIRECTION getDirection();
    void setValue(GPIO_VALUE val);
    GPIO_VALUE getValue();
    void toggleOutput();
    ~MYGPIO(); //destructor
};
#endif
