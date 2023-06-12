#include <stdio.h>

void f(int x)
{
    if (x < 3)
        f(x + 1);
    printf("%d\n", x);
    if (x < 5)
        f(x + 2);
}

int main(void)
{
    f(2);
    return 0;
}

//ODPOWIEDZ:
//3
//5
//2
//4
//6
