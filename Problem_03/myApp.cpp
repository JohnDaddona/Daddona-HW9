// myApp.cpp
// Main application to demonstrate the functionality of the PhoneBook class.
// This interactive app presents a menu for inserting, displaying, removing, and
// getting, an example invocation would be ./myApp.

#include "PhoneBook.h"
#include <iostream>
#include<string>
using namespace std;

void optionsMenu(){
  cout << "1. Insert a name and number." << endl;
  cout << "2. Get someones number." << endl;
  cout << "3. Display phonebook contents." << endl;
  cout << "4. Remove someone from the phone book." << endl;
  cout << "5. Quit." << endl;
  cout << "Enter your choice: ";
}

int main(){
  PhoneBook myPhoneBook("MyPhoneBook");
  int choice;
  while (true) {
    optionsMenu();
    cin >> choice;
    string name;
    int number;
    
    switch(choice){
      case 1:
         cout << "Enter name: ";
         cin >> name;
         cout << "Enter number: ";
         cin >> number;
         myPhoneBook.insert(name,number);
         break;
      case 2:
        cout << "Enter name: ";
        cin >> name;
        number = myPhoneBook.getPhoneNumber(name);
        if(number != -2){
          cout << "Number for " << name << " is " << number << endl;
          }
        else{
          cout << "Person not found" <<  endl;
          }
        break;
      case 3:
        myPhoneBook.displayPhoneBook();
        break;
      case 4:
        cout << "Enter a name to remove: ";
        cin >> name;
        myPhoneBook.removeName(name);
        break;
      case 5:
        cout << "Exiting" << endl;
        break;
      default:
        cout << "Not a valid choice, try again" << endl;
        break;
    }
    if(choice == 5){
      break;
      }
  }
  return 0;
  }


































