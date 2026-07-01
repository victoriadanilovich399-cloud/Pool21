#include <unistd.h>

void ft_print_comb2(void);
void ft_putchar(char t);
void ft_putfn(char a, char b, char c, char d);

void ft_putchar(char t)
{
    write(1, &t, 1);
}

void ft_putfn(char a, char b, char p, char c, char d)
{
    ft_putfn(a);
    ft_putfn(b);
    ft_putfn(p);
    ft_putfn(c);
    ft_putfn(d);
}

void ft_print_comb2(void)
{
	 
}
