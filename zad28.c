#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f(char *str){
    static int x = 0;
    x += strlen(str)-1;
    printf("%d\n", x);
}

int main () {
    // FILE *plik = fopen("tekst.txt", "r");
    // char tab[20];
    // while(fgets(tab, 19, plik)!= NULL){
    // if (tab[0] < 'p')
    // f(tab);
    // fputs(tab, stdout);
    // }

    char *tekst = "Dupka\ta";
    int length = strlen(tekst);

    printf("%d", length);
    puts(tekst);
    return 0;
}