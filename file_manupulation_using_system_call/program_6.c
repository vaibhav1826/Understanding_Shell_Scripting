// c program to delete a filename

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#define BUFFER_SIZE 1024
int main()
{
    const char *filename = "file1.txt";
    if (unlink(filename) == -1)
    {
        printf("error in deleting the filename ");
        return -1;
    }
    printf("filename %s is deleted successful");
    return 0;
}
