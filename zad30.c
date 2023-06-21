#include <stdio.h>
void write(char *[], int);
int main(void)
{
    char *countries[5] = {"Italy", "Malta", "Spain", "Greece", "Portugal"};
    write(countries, 5);
    return 0;
}
void write(char *t[], int n)
{
    int i;
    puts(*(t + 3));
    for (i = 0; i < n; ++i)
        printf("%c\t", **(t + i));
    printf("\n");
    for (; n > 0; n--)
        puts(t[n - 1]);
}
