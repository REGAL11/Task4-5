#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char** argv, char** envp)
{
    printf("Environment variables from envp: \n");
    for(char** env = envp; *env != 0; env++)
    {
        printf("%s\n",*env);
    }

    extern char** environ;

    printf("Environment variables from environ: \n");
    for(char** env = environ; *env != 0; env++)
    {
        printf("%s\n",*env);
    }
}