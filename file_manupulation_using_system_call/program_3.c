// c program to read from and write to files

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024
int main()
{
    char buffer[BUFFER_SIZE];
    int sourcefd, destinationfd;
    sourcefd = open("file.txt", O_RDONLY | O_CREAT, 0644);
    destinationfd = open("file1.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    ssize_t bytesread;
    while ((bytesread = read(sourcefd, buffer, BUFFER_SIZE)) > 0)
    {
        write(destinationfd, buffer, bytesread);
    }
    close(sourcefd);
    close(destinationfd);
    return 0;
}