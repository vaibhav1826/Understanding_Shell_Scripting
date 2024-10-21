// c program to use getcwd system call to retrive the current working directory and display it to the user

#include <stdio.h>
#include <unistd.h>
#include <limits.h>
int main()
{
    char cwd[PATH_MAX];
    if ((getcwd(cwd, sizeof(cwd)) != NULL))
    {
        printf("current working directory : %s\n", cwd);
    }
    else
    {
        printf("error found");
    }
    return 0;
}