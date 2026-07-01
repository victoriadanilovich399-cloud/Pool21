#include <unistd.h>

void ft_is_negative(int number);
void ft_putchar(char c);

void ft_putchar(char charecter)
{
     write(1, &charecter, 1);
}

void ft_is_negative(int number)
{
     if(number < 0)
     {
        ft_putchar('N');
     } else
     {
        ft_putchar('P');
     }
}

int main()
{
     ft_is_negative(0);
     ft_is_negative(-5);
     ft_is_negative(5);
}
