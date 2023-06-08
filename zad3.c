#include <stdio.h>
#include <string.h>

int liczba_podciagow(char* lancuch1, char* lancuch2) {
    int count = 0;
    char* ptr = lancuch1;

    while ((ptr = strstr(ptr, lancuch2)) != NULL) {
        count++;
        ptr += strlen(lancuch2);
    }

    return count;
}

int main() {
    char lancuch1[] = "mamama";
    char lancuch2[] = "mam";
    int wynik = liczba_podciagow(lancuch1, lancuch2);
    printf("Liczba wystapien: %d\n", wynik);

    return 0;
}