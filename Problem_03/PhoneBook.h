// PhoneBook.h
// Defines the PhoneBook class that manages a list of Record objects.
// This class provides methods to insert, remove, display, and find phone book
// entries.

// Part 1: Include guards for header file
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Record.h"
#include <string>
#include <iostream>
using namespace std;

const int MAXSIZE = 100; // Maximum size for the phone book

class PhoneBook{
  private:
    Record list[MAXSIZE]; //Array to hold records with a specified max size
    string bookName; // Name of the phone book
    int num_records; // Keeping track of the number of records
    int findName(string s); // Finding name via index
  public:
    PhoneBook(); // Default Constructor
    PhoneBook(string s); // Constructor with a value
    string getPhoneBookName(); // Getter for phone book name
    int getNumberofRecords(); // getter for the number of records
    void insert(string name, int number); // inserts a new record
    void displayPhoneBook(); // displays all records
    void removeName(string s); // removes a record by name
    int getPhoneNumber(string s); // Retrieves number by name
    ~PhoneBook(); //destructor
};

#endif


















