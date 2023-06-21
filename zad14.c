#include <stdio.h>
#include <stdlib.h>

void f(float *x, float *y)
{
    *y = --*x;
    x = y;
    ++*x;
}

int main(void)
{
    float *tab, *x;
    tab = (float *)malloc(2 * sizeof(float));
    tab[0] = 5;
    x = &*(tab + 1);
    f(tab, x);
    printf("%.1f %.2f", tab[0], tab[1]);
    return 0;
}

//ODPOWIEDZ:
//4.0 5.00