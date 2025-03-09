#Write a program to find the greatest among two numbers.

echo "Read the 2 Numbers:"
read num1
read num2
if(($num1>$num2))
then 
    echo "The largest number is: $num1"

else
    echo "The largest number is: $num2"
fi