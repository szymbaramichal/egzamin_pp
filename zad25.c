#include <stdio.h>
void g(int x);

void f(int x)
{
    if (x > 2)
        g(x - 4);
    printf("%d\t", x);
}

void g(int x)
{
    printf("%d\t", x);
    f(x + 2);
}

int main(void)
{
    f(6);
    return 0;
}

//2   0   2   4   6
