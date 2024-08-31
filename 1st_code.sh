# basic understanding of using if -else condition in the shell scripting 
                                
read -p "enter the number : " num
if (( $num > 0 ))
then
echo "$num is a positive number"
elif (( $num == 0 ))
then
echo "$num is a unique number which is neither positive nor negative"
else
echo "$num is a negative number"
fi