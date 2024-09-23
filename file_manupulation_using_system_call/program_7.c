// create a c program using system call that keeps reading from the console until the user type $ , save the input data  to a file called input.txt

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#define BUFFER_SIZE 1024
int main()
{
    int fd;
    ssize_t bytesread;
    char buffer[BUFFER_SIZE];
    fd = open("file1.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    while ((bytesread = read(0, buffer, sizeof(buffer) - 1)) > 0)
    {
        buffer[bytesread] = '\0';
        if (buffer[0] == '$')
            break;
        write(1, buffer, bytesread);
    }
    return 0;
}
