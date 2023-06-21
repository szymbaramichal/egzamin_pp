#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int liczba_podciagow(char* lancuch1, char* lancuch2) {
    int count = 0;
    char *temp = lancuch1;

    while((temp = strstr(temp, lancuch2)) != NULL) 
    {
        count++;
        temp += strlen(lancuch2);
    }

    return count;
}

int main() {
    char lancuch1[] = "zxczxczmamxczczxczxczxcmamama";
    char lancuch2[] = "mam";

    int wynik = liczba_podciagow(lancuch1, lancuch2);
    printf("Liczba wystapien: %d\n", wynik);

    return 0;
}