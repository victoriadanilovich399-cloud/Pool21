#include <unistd.h>

void ft_putchar(char c);
void ft_print_alphabet(void);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    for (int i = 0; i < 26; i++)
    {
       ft_putchar('z' - i);  
    }
}

int main(void)
{
    ft_print_alphabet();
}


