#!/bin/bash
# bashBuilder.sh is a small script to compile and link the PhoneBook application
# An example invocation would be ./myApp


g++ -g Record.cpp PhoneBook.cpp myApp.cpp -o myApp

echo "Build complete. Run the application with ./myApp"




