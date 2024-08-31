# understanding of logical expression with if-else condition

read -p "enter your age " age
if  [ $age -lt 18 ]
then
echo "the person is not allowed to work"
elif [ $age -ge 18 ] && [ $age -le 60 ]
then
echo "the person is a working proffesional"
else
echo "the person is retired from the job"
fi

#these are the basic logical operator

# logical operator - AND ( && )
# logical operator - OR ( || )
# logical operator - NOT ( ! )