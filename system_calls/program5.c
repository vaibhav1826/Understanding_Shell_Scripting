// c program to use chdir system call to change to the new directory

#include <stdio.h>
#include <unistd.h>
int main()
{
    const char *new_directory = ""; // pathname
    if (chdir(new_directory) == -1)
    {
        printf("error found");
        return 1;
    }
    printf("directory changed to %s", new_directory);
    return 0;
};
