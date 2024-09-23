// create a c program to delete a directory specified by the user using the rmdir system call

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
int main()
{
    char dirname[255];
    printf("enter the directory name you wanna delete: ");
    scanf("%255s", dirname);
    if (rmdir(dirname) == -1)
    {
        perror("directory  is not removed");
        return 1;
    };
    printf("Directory %s is removed successfully", dirname);
    return 0;
}
