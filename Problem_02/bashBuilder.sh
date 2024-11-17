#This is a small bash program called bashBuilder.sh that compiles the MYGPIO
# class and makes the application. An example invocation is ./bashBuilder.sh
# Configure P9_12 (GPIO 60) as output
config-pin P9_12 gpio
config-pin P9_12 out

# Configure P8_16 (GPIO 46) as input
config-pin P8_16 gpio_pu


# Compile the MYGPIO class and application
g++ -g myGPIO.cpp myGpioApp.cpp -o myGpioApp







