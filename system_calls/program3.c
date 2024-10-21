// c program to remove directory with in the system using system call

#include <stdio.h>
#include <unistd.h>
#include <errno.h>
int main()
{
    char dirname[255];
    printf("enter the name of the directory you want to remove: ");
    scanf("%254s", dirname);
    if (rmdir(dirname) == -1)
    {
        printf("error found");
        return -1;
    }
    printf("successfully removed \n ");
    return 0;
}
