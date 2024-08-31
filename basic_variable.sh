# basic code (first code )
echo "hello world" 

# system variable
echo $BASH
echo $BASH_VERSION
echo $HOME
echo $PWD

# first code fro addition of two number

read -p "enter 1st number : " num1
read -p "enter 2nd number : " num2
sum=$((num1+num2))
echo "addition of two number $sum"


# basic code for a basic calculation
read -p "enter 1st number : " num1
read -p "enter 2nd number : " num2
sum=$((num1+num2))
dif=$((num1-num2))
mul=$((num1*num2))
div=$((num1/num2))
echo "addition of two number $sum"
echo "subtraction of two number $dif"
echo "multiplication of two number $mul"
echo "division of two number $div"


# arthmetic operators - ( + , - , * , / , % )

# basic command to run are 

# --> make a file with touch <file name> command

# --> give all the permission for execution using command --> chmod 777 <file_name>

# nano <file_name> --> for opening command page and writing code

# ./<file_name> --> for execution for shell sricpting commands