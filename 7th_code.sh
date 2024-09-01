# for loop concept for shell scripting 
# program to prints the multiplication table of a given number

read -p "enter the number : " num
for (( i=1;i<11;i++ ))
do
result=$((num*i))
echo "$num * $i = " $result
done


# basic structure of the for loop syntax

# for (( condition1;condition2;condition3 ))
# do
# condition...........
# done
