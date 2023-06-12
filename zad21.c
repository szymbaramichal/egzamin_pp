#include <stdio.h>

int x = 5;

int f(int n)
{
    static int y = 1;
    --y;
    x += y;
    printf("n=%d \t x=%d \t y=%d \n", n, x, y);
    if (n < 4)
        return f(n + 3) + 300;
    return 0;
}

int main(void)
{
    printf("%d", f(0));
    return 0;
}

//ODPOWIEDZ:
//n=0      x=5     y=0 
//n=3      x=4     y=-1 
//n=6      x=2     y=-2 
//X600