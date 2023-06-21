#include <stdio.h>

int main(void)
{
    char *w = "f-g-e-t-s", *x = w;
    while (*++x)
        ;
    do
        if (*--x != '-')
        {
            putchar(*x);
            putchar('|');
            puts(x);
        }
    while (x - w);
    return 0;
}

//ODPOWIEDZ:
//s|s
//t|t-s
//e|e-t-s
//g|g-e-t-s
//f|f-g-e-t-s
