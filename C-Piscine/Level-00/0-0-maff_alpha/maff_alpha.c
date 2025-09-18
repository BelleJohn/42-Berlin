#include <unistd.h>

int main()
{
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (c % 2 == 0)
        {
            char upper = c - 32;
            write(1, &upper, 1);
        }
        else
        {
            write(1, &c, 1);
        }
    }

    write(1, "\n", 1);
    return 0;
}