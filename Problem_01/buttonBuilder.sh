#This is a small build program that when ran, builds my LED lighting by button
# program. An example invocation is ./buttonBuilder.sh

#!/bin/bash
config-pin P8_16 gpio_pu  # Set GPIO 46 (P8_16) as input with pull-up
config-pin P9_12 gpio     # Set GPIO 60 (P9_12) as output

g++ -g buttonLED.cpp -o buttonLED

echo "Built."

