#include <stdio.h>
#define W 3
#define K 4
int sum(int *start, int *stop);

int main(void)
{
    int tab[W][K] = {{2, 6, 4, 5}, {0, 0, 2, 6}, {2, 4, 3, 7}};
    int *p, *q;
    p = &tab[0][3];
    q = &tab[2][2];
    printf("%d\t", sum(tab[0], p));
    printf("%d\t", sum(p, tab[2]));
    printf("%d\t", sum(&tab[2][0], q));
    printf("%d\t", sum(tab[1] + 1, tab[1] + 3));
    printf("%d\t", sum(p + 3, q + 1));
    return 0;
}

int sum(int *start, int *stop)
{
    int temp = 0, *s;
    int i = 0;
    for (s = start; s <= stop; s++)
        temp += *s;
    return temp;
}

//ODPOWIEDZ: 
//17      15      9       8       24