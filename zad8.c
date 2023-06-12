#include <stdio.h>
#include <stdlib.h>

int moja_atoi(char *tab);

int main()
{
    char* str = "   -5.4ola";
    int num = moja_atoi(str);
    printf("Wynik konwersji to: %d\n", num);
    
    return 0;
}

int moja_atoi(char *tab) {
    int wynik = 0;
    int znakLiczby = 1;
    int index = 0;

    // Usunac tablic z przodu
    while (tab[index] == ' ')
        index++;

    // Sprawdzenie czy liczba dodatnia czy ujemna
    if (tab[index] == '+' || tab[index] == '-') {
        znakLiczby = (tab[index] == '-') ? -1 : 1;
        index++;
    }

    // Konwersja liczby
    while (tab[index] >= '0' && tab[index] <= '9') {
        wynik = wynik * 10 + (tab[index] - '0');
        index++;
    }

    return znakLiczby * wynik;
}
