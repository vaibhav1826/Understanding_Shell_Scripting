// c program to rename the file name

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#define BUFFER_SIZE 1024
int main()
{
    const char *old_name = "source.txt";
    const char *new_name = "file.txt";
    if (rename(old_name, new_name) != 0)
    {
        printf("error in renaming file");
        return -1;
    }
    printf("file name change %s to %s ", old_name, new_name);
    return 0;
}
