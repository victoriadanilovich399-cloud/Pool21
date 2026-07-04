#include <unistd.h>

void ft_print_numbers(void);
void putchar(char a);

void putchar(char a)
{
    write(1, &a, 1);
}

void ft_print_numbers(void)
{
    int a = '0' + 0;
    while(a < '0' + 10)
    {
        putchar(a);
        a++;
    }    
}

