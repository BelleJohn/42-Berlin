#include <unistd.h>

int main(void)
{
    /*The write() function can only output raw bytes (characters) to a file descriptor. 
    It cannot directly print an int. To print an int, you must first convert it to a 
    string (e.g., using your own function or itoa), then use write() to output the 
    resulting string.*/
    write(1, "Hello World!\n", 14);
    return 0;
}