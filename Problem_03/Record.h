// Record.h
// This is my record header file that contains the Record class 
// to store individual entries in the phone book,including a name 
// and phone number. This class sets and gets these values.

// Part 1: Include guards for header file
#ifndef RECORD_H
#define RECORD_H

#include<string>
using namespace std;
class Record{
  private:
    string name; // storing the name
    int number; // storing the number
  public:
    Record(); // empty default constructor
    Record(string name, int number); // giving values to the constructor
    string getName();// getter for name
    int getNumber();// getter for number
    void setName(string s);// setter for name
    void setNumber(int n); // setter for number
    ~Record(); // empty destructor
  };
#endif






