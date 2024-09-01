# understanding  while loop concept in shell scripting 
# program to reverse a number using while loop

read -p "enter the number of which reverse you want : " num
while (( num > 0 ))
do
rem=$((num%10))
rev=$((rev*10+rem))
num=$((num/10))
done
echo "the reverse of a number $rev"

