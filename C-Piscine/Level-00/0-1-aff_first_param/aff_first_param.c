#include <unistd.h>

int main(int argc, char **argv)
{
    /*In C, argc is always at least 1 (the program name), so you should 
    check if argc > 1 (not > 0) to see if there is at least one argument
     after the program name.*/
    if (argc > 1)
    {
        int len = 0;
        while (argv[1][len] != '\0')
        {
            write(1, &argv[1][len], 1);
            len++;
        }
    
        write(1, "\n", 1);
    }
    return 0;
}