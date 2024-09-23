// write a program to create and open a file using system call in shell scripting
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
    int fd;
    fd = open("file.txt", O_CREAT | O_RDONLY, 0644);
    close(fd);
    return 0;
}
