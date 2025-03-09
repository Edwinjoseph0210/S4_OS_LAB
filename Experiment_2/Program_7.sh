#Write a program to implement a simple calculator.

echo "Read the 2 Numbers:"
read a
read b

echo "Read the operation: 1: Add, 2: Subtract, 3: Multiply, 4: Divide: "
read op

case $op in

1) 
    rs=$(($a+$b))
    echo "The sum is $rs."
    ;;
2) 
    rs=$(($a-$b))
    echo "The result is $rs."
    ;;
3) 
    rs=$[$a*$b]
    echo "The result is $rs."
    ;;
4) 
    rs=$[$a/$b]
    echo "The result is $rs."
    ;;
*)
    echo "Wrong Choice"
    ;;

esac
