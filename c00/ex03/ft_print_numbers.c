#include <unistd.h>

void ft_putchar(char c);
void ft_print_numbers(void);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
     for(int i = 0; i < 10; i++)
     {
        ft_putchar('9' - i);
     }
}
int main(void)
{
    ft_print_numbers();
}

