#include <stdio.h>
#include <string.h>

int liczba_podciagow(char* lancuch1, char* lancuch2) {
    int count = 0;

    while ((lancuch1 = strstr(lancuch1, lancuch2)) != NULL) {
        count++;
        lancuch1 += strlen(lancuch2);
    }

    return count;
}

int main() {
    char lancuch1[] = "zxczxczxczczxczxczxcmamama";
    char lancuch2[] = "mam";
    int wynik = liczba_podciagow(lancuch1, lancuch2);
    printf("Liczba wystapien: %d\n", wynik);

    return 0;
}