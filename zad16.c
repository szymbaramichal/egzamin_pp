#include <stdio.h>

int f(int *y, int x)
{
    int i, *z = y + 2;
    for (i = 1; *(y + i) > x; i += 2)
        if (*z++ > 2)
            printf("%d %d \n", i, y[i]);
}

int main(void)
{
    int tab[8] = {5, 4, 6, 10, 9, 11, 2, 1};
    f(tab, 2);
    return 0;
}

//ODPOWIEDZ: 1 4
// 3 10
// 5 11