// create a c program that prompts the user to enter a directory name and use mkdir system call to create a directory

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
int main()
{
    char dirname[255];
    printf("enter the directory name");
    scanf("%255s", dirname);
    if (mkdir(dirname, 0744) == -1)
    {
        perror("error find");
        return 1;
    }
    printf("directory %s have successfully made", dirname);
    return 0;
};
