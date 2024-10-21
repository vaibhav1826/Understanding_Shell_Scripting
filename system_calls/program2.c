// program to create a new directory with in the system using system call

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
    char dirname[255];
    printf("enter the directory name: ");
    scanf("%255s", dirname);
    if (mkdir(dirname, 0777) == -1)
    {
        perror("error found");
        return 1;
    }
    printf("directory created successfully \n");
    return 0;
};