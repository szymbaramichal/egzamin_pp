#include <stdio.h>

void f(long *p1, long *p2, long x)
{
    while (p1 != p2)
    {
        if (*p1 > x)
            printf("%ld\n", *p1);
        ++p1;
    }
}

int main(void)
{
    long a[15] = {5, 9, 6, 1, 7, 4, 8, 2, 1, 3, 7, 6, 5, 1, 9};
    f(a + 2, a + 11, 5);
    return 0;
}

//ODPOWIEDZ:
//6
//7
//8
//7