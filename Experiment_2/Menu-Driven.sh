#Write a program to display your Name, Semester, Batch, Roll Number and Register Number.
#Write a program to display the sum of 2 Numbers.
#Write a program to find the greatest among two numbers.
#Write a program to display the first 10 natural numbers.
#Write a program to find the factorial of a given number.
#Write a program to find the fibonacci series of n numbers.
#Write a program to implement a simple calculator.

echo "Welcome to the program. Choose between number 1 - 7."
echo "Enter the number:"
read op

case $op in

1) 
    echo "Program to print your Name, Semester, Rollno"
    echo "Enter Name"
    read N
    echo "Enter Semester"
    read S
    echo "Enter Rollno"
    read R
    echo "The name of the student is $N of semester $S. The rollno is $R."
    ;;
2)
    echo "Program to display the sum of n Numbers"
    echo "Enter the 2 numbers:"
    read n1
    read n2
    sum=$(($n1+$n2))
    echo "The sum of $n1 and $n2 is $sum."
    ;;

3)  echo "Program to find the greatest among two numbers"
    echo "Enter the 2 numbers:"
    read n1
    read n2
    if (($n1>$n2))
    then 
        echo "$n1 is the greatest number."

    else    
        echo "$n2 is the greatest number."
    fi
    ;;

4) 
    echo "Program to display the first 10 natural numbers."
    for((i=0;i<=10;i++))
    do
        echo "$i"
    done
    ;;

5) 
    echo "Program to find the factorial of a given number"
    echo "Enter the number: "
    read n

    fact=1 

    for((i=1;i<=n;i++))
    do
        fact=$(($fact*$i))
    done
    echo "The factorial of $n is $fact."
    ;;

6)
    echo "Program to find the fibonacci series of n numbers."
    echo "Read the value of n"
    read n
    x=1
    y=2
    for((i=0;i<n;i++))
    do
        echo "$x"
        f=$(($x+$y))
        x=$y
        y=$f
    done
    ;;


*)
    echo "Invalid input. Please try again."
    ;;

esac
