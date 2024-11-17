// Record.cpp
// Implementation of the Record class methods.
#include "Record.h"
#include<string>
using namespace std;
//Default empty constructor
Record::Record(){}

// Constructor with values
Record::Record(string name, int number) : name(name), number(number){
}

//Getter for name
string Record::getName() { 
  return name; 
}    

//Getter for number
int Record::getNumber() { 
  return number;
}   

// Setter for name
void Record::setName(string s) { 
  name = s; 
} 

//Setter for number
void Record::setNumber(int n) { 
  number = n; 
} 

Record::~Record() {} // Destructor
