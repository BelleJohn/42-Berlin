#include <unistd.h>

int main(void) 
{
    /*The write() function can only output raw bytes (characters) to a file descriptor. 
    It cannot directly print an int. To print an int, you must first convert it to a
    string (e.g., using your own function or itoa), then use write() to output the
      resulting string.*/
    for (char i = '9'; i >= '0'; i--)
    {
       write(1, &i, 1); 
    }
    write(1, "\n", 1);
    return 0;
}