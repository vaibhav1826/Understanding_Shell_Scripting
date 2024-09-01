# basic code for case condition 

# code for basic calculator using switch statement 

 read -p "enter the first number" num1
read -p "enter the second number" num2
read -p "enter the symbol" symbol
case $symbol in
+) echo "addition of number : " $((num1+num2)) ;;
-) echo "substraction of numbers : " $((num1-num2));;
x) echo "multiplication of numbers : " $((num1*num2));;
/) echo "division of  numbers : " $((num1%num2));;
esac

