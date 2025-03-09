#Write a program to find the factorial of a given number.

echo "Enter the Number:"
read num1

fact=1

for((i=1;i<=num1;i++))
do
    fact=$(($fact*$i))
done
echo "The factorial is: $fact" 