#include <unistd.h>

int main()
{
    for (char c = 'z'; c >= 'a'; c--)
    {
        if (c % 2 == 1)
        {
            char UPPER = c - 32;
            write(1, &UPPER, 1);
        }
        else
        {
            write(1, &c, 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}