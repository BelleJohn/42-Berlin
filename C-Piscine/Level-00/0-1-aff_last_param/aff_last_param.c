#include <unistd.h>

int main(int argc, char **argv)
{
    if( argc > 1)
    {
        int i = 0;
        /*sizeof(argv[argc-1]) gives the size of the pointer (usually 4 or 8 bytes),
         not the length of the string. So your loop stops after a few characters.*/
        
         //while(i < sizeof(argv[argc-1]))


        /*keeps printing each character until it reaches the null terminator \0, 
        which marks the end of the string. */
        while (argv[argc-1][i] != '\0')
        {
            write(1, &argv[argc-1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}