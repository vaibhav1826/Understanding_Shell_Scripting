// write a c program to read from console or to write in console
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFFER_SIZE 1024
int main()
{
    char buffer[BUFFER_SIZE];
    ssize_t bytesread = read(0, buffer, BUFFER_SIZE);
    write(1, buffer, bytesread);
    return 0;
}