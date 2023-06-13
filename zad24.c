#include <stdio.h>

//zadanie do skipa
int main() {
    int *p, **q;
    int (*a)[5];
    int m1[2][5];
    int m2[2][3];

    p=m1[0]; //poprawne
    p=&m2[1][2]; //poprawne
    p=m1; //niepoprawne
    a=m1; //poprawne
    a=m2; //poprawne
    *q=m2[0]; //niepoprawne
    q=m2; //poprawne

    return 0;
}