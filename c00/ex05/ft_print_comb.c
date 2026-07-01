#include <unistd.h>

void ft_print_comb(void);
void ft_putchar(char aa);
void ft_putnumber(char a, char b, char c);

void ft_putchar(char aa)
{
    write(1, &aa, 1);
}

void ft_putnumber(char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    if(a != '7') {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void ft_print_comb(void)
{
    int a, b, c;

    a = 0;
    while (a <= 7) {
        b = a + 1;
        while (b <= 8) {
            c = b + 1;
    	    while (c <= 9) {
                ft_putnumber(a + '0', b + '0', c + '0');
                c++;
            }
            b++;
        }
        a++;
    }
}


int main()
{
    ft_print_comb();

}
