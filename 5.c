//#include <bits/getopt_core.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

extern char** environ;

void help_print()
{
    printf("-h                  Print help\n");
    printf("-e [ENV_NAME]       Gets name of environment variable\n");
}

int
main(int argc, char** argv)
{
    if(argc == 1)
    {
        printf("getenvir -h for usage\n");

        return EXIT_SUCCESS;
    }
    char* opts = "he:";

    int opt;
    while( (opt = getopt(argc, argv, opts)) != -1 )
    {
        switch (opt)
        {
            case 'h':
            {
                help_print();
                break;
            }

            case 'e':
            {
                char* envname = optarg;
                char* val = getenv(envname);
                if(!val)
                {
                    printf("No environment variable with such name!\n");

                    break;
                }

                printf("%s = %s\n",envname,val);

                break;
            }
        }
    }

    return EXIT_SUCCESS;
}