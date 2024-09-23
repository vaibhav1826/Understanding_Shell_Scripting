// program to read the character from the 11th to 20 th position using lseek

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024
int main()
{
    char buffer[BUFFER_SIZE];
    int fd = open("file1.txt", O_CREAT | O_RDONLY);
    lseek(fd, 10, SEEK_SET);
    read(0, buffer, BUFFER_SIZE - 1);
    buffer[BUFFER_SIZE - 1] = '\0';
    printf("%s", buffer);
    close(fd);
    return 0;
}
