#!/bin/bash

# Input: Three numbers
echo "Enter first number: "
read num1
echo "Enter second number: "
read num2
echo "Enter third number: "
read num3

# Determine the greatest number
if ( $num1 -ge $num2 ) && ( $num1 -ge $num3 ); then
    echo "$num1 is the greatest."
elif ( $num2 -ge $num1 ) && ( $num2 -ge $num3 ); then
    echo "$num2 is the greatest."
else
    echo "$num3 is the greatest."
fi

