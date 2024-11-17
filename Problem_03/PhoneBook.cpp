// PhoneBook.cpp
// Implementation of the PhoneBook class methods.

#include "PhoneBook.h"
#include<string>
#include <iostream>

PhoneBook::PhoneBook() : num_records(0) {} // Default constructor initializes with zero records

PhoneBook::PhoneBook(string s) : bookName(s), num_records(0) {} // Parameterized constructor

// Getter for phonebook name
string PhoneBook::getPhoneBookName() { 
  return bookName; 
} 

// Getter for number of records
int PhoneBook::getNumberofRecords() { 
  return num_records; 
} 

// Inserts a new record
void PhoneBook::insert(string name, int number){
  if(num_records < MAXSIZE){
    list[num_records++] = Record(name, number);
    }
  else{
    cout << "The phone book is full!" << endl;
    }
  }

// Displays all records in the phone book
void PhoneBook::displayPhoneBook(){
  cout << "Phone Book: " << bookName << endl;
  for(int i = 0; i < num_records; ++i){
    cout << "Name: " << list[i].getName() << ", Number: " << list[i].getNumber()
    << endl;
    }
  }

// Removes a record by name
void PhoneBook::removeName(string s) {
  int index = findName(s);
  if (index != 99) {
    list[index] = list[--num_records];
    }
  else {
    cout << "Record not found!" << endl;
  }
}


// Retrieves the phone number by name
int PhoneBook::getPhoneNumber(string s) {
  int index = findName(s);
  return (index != 99) ? list[index].getNumber() : -1; // Return number or -1 if not found
}


// Find the index of a name in the phone book
int PhoneBook::findName(string s) {
  for(int i=0; i<num_records; ++i){
    if(list[i].getName() == s){
      return i; //Return the index if the name is found.
      }
    }
  return 404; //Return 404 if name is not found
}

//Destructor
PhoneBook::~PhoneBook(){
}





