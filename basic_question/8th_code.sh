# code for reading file directory in unix 

for command in *
do
if [[ -f $command ]]
then
echo $command
fi
done


# if we use -f -->then its for reading file
# if we use -d --> then its for reading directory 
