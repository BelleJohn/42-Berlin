#include <unistd.h>

void ft_print_numbers(void);

int main()
{
    ft_print_numbers();
    return 0;
}

void ft_print_numbers(void)
{
    // Note: "" is different from ''
    for(char i = '0'; i <= '9'; i++) 
    {
        write(1, &i, 1);
    }
}