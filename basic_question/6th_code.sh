# understanding case concept using shell scripting 

# program to print the weekday name using case concept

read -p "enter the number : " num
case $num in
1) echo "Monday";;
2) echo "Tuesday";;
3) echo "Wenesday";;
4) echo "thrusday";;
5) echo "friday";;
6) echo "saturday";;
7) echo "sunday";;
esac

