#include <stdio.h>

int liczba_podciagow(char* lancuch1, char* lancuch2) {
    int count = 0; 
    int i, j, k;
    int found;

    for (i = 0; lancuch1[i] != '\0'; i++) {
        if (lancuch1[i] == lancuch2[0]) {
            found = 1;
            k = i + 1;

            for (j = 1; lancuch2[j] != '\0'; j++) {
                if (lancuch1[k] != lancuch2[j]) {
                    found = 0;
                    break;
                }
                k++;
            }

            if (found) {
                count++;
            }
        }
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