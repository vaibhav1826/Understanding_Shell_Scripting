# concept of while loop and finding the factorial of a number 

read -p "enter the number of which factorial you want" num
fact=1
while (( $num > 0 ))
do
fact=$(( fact*num ))
num=$(( num-1 ))
done
echo "$fact"


# basic  syntax of a while loop condition

# while (( condition ))
# do
# condition 1...
# condition 2...
# done
 