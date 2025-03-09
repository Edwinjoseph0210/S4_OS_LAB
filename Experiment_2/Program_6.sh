#Write a program to find the fibonacci series of n numbers.

echo "Enter the value of n:"
read n

x=0
y=1

for((i=0;i<=n;i++))
do  
    echo "$x"
    f=$(($x+$y))
    x=$y
    y=$f
done