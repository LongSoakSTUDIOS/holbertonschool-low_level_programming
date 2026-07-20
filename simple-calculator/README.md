# Holberton School Simple Calculator in C

##Compile Command
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

## Run Instructions
After compiling run ./calculator

## Supported Operations
Addition
Subtraction
Multiplation
Division

## Numeric Behavior
Addition, Subtraction, Multiplation and Division will only take integers.
Division is able to return decimals.

## Limiations
1. Only integers are able to be input into the operators. This is a result of me being lazy.
2. The entire calculator is in one function, which will result in further additions to be annoying to add. I previously had each operation as a seperate function to please betty but then i changed it.