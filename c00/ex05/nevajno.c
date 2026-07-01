#include <unistd.h>
#include <string.h>

void putstring(char *str);
int  pr(int a, int b);
int  sum(int a, int b);
void putchar(char j);
int  div(int a, int b);

void putstring(char *str)
{
    int len;
    
    len = strlen(str);

    int index;

    index = 0;
    while(index < len)
    {
        putchar(str[index]);
        index++;
    }

    putchar('\n');

}

int div(int a, int b)
{
    return a / b;
}

int pr(int a, int b)
{
    return a * b;
}

int sum(int a, int b)
{
    return a + b;
}

void putchar(char j)
{
    write(1, &j, 1);
}

int main(void)
{
    int p1;
    int p2;
    
    p1 = 1;
    p2 = 2;

    int res;

    p1 = 2;

    res = sum(p1, p2) + '0';
    // putchar(res);

    res = pr(p1, p2) + '0';
    // putchar(res);
    
    res = div(p1, p2) + '0';
    // putchar(res);
    
    p1 = res;

    char qw[] = "hello, World!";
    putstring(qw);

    putstring("My name is Vika!");
} 
