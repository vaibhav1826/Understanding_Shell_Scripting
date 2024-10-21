// c program that prints the content of a directory using system calls like opendir readdir and closedir

#include <stdio.h>
#include <dirent.h>
int main()
{
    DIR *dir;
    struct dirent *entry;
    dir = opendir(".");
    if (dir)
    {
        printf("content of the directory\n");
        while (entry = readdir(dir) != NULL)
        {
            printf("%s\n", entry->d_name);
        }
        closedir(dir);
    }
    return 0;
}