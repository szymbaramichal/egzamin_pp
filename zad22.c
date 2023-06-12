#include <stdio.h>

void f(int n)
{
    int x = 0;
    static int y = 1;
    --y;
    x += y;
    if (n < 4)
        f(n + 2);
    printf("n=%d \t x=%d \t y=%d \n", n, x, y);
}

int main(void)
{
    f(0);
    return 0;
}

//ODPOWIEDZ:
//n=4      x=-2    y=-2 
//n=2      x=-1    y=-2 
//n=0      x=0     y=-2 
