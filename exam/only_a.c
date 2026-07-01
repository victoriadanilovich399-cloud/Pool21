#include <unistd.h>

void putchar(char a);

void putchar(char a)
{
    write(1, &a, 1);
}

int main()
{
    putchar('a');
}
