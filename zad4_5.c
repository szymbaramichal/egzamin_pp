#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30
#define MAX 10

typedef struct osoba
{
    char *imie;
    char *nazwisko;
    char *miejscowosc;
    int wiek;
} OSOBA;

void inicjalizacja_OSOBA(OSOBA *dane, char* imie, char* nazwisko, char* miejscowosc, int wiek) {
    int imie_dlugosc = strlen(imie) + 1;
    int nazwisko_dlugosc = strlen(nazwisko) + 1;
    int miejscowosc_dlugosc = strlen(miejscowosc) + 1;

    dane->imie = malloc(imie_dlugosc * sizeof(char));
    dane->nazwisko = malloc(nazwisko_dlugosc * sizeof(char));
    dane->miejscowosc = malloc(miejscowosc_dlugosc * sizeof(char));

    strcpy(dane->imie, imie);
    strcpy(dane->nazwisko, nazwisko);
    strcpy(dane->miejscowosc, miejscowosc);
    dane->wiek = wiek;
}

void wyswietl(OSOBA *dane) {
    printf("Imie: %s\nNazwisko: %s\nMiejscowosc: %s\nWiek: %d\n", dane->imie, dane->nazwisko, dane->miejscowosc, dane->wiek);
}

void dealokacja_OSOBA(OSOBA *osoba) {
    free(osoba->imie);
    free(osoba->nazwisko);
    free(osoba->miejscowosc);
}

int main(void)
{
    OSOBA dane[MAX];
    char tab_imie[N + 1];
    char tab_nazwisko[N + 1];
    char tab_miejscowosc[N + 1];
    int i = 0, age, k;
    while (i < MAX)
    {
        printf("Podaj imie: ");
        fgets(tab_imie, sizeof(tab_imie), stdin);
        printf("Podaj nazwisko: ");
        fgets(tab_nazwisko, sizeof(tab_nazwisko), stdin);
        printf("Podaj miejscowosc: ");
        fgets(tab_miejscowosc, sizeof(tab_miejscowosc), stdin);
        printf("Podaj wiek: ");
        scanf("%d", &age);
        while (getchar() != '\n');
        inicjalizacja_OSOBA(&dane[i], tab_imie, tab_nazwisko, tab_miejscowosc, age);
        i++;
    }
    printf("Podaj, ktory rekord tablicy dane chcesz wyswietlic.\n");
    printf("Wyjscie poza indeks tablicy lub wpisanie znaku nie bedacego liczba konczy wypisywanie!");
    while (scanf("%d", &k) == 1 && k >= 0 && k < MAX)
    {
        printf("Rekord %d\n", k);
        printf("--------------------------\n");
        wyswietl(&dane[k]);
        printf("--------------------------\n");
        while (getchar() != '\n');
        printf("Podaj ktory rekord tablicy dane chcesz wyswietlic.\n");
        printf("Wyjscie poza indeks tablicy lub wpisanie znaku nie bedacego liczba konczy wypisywanie!\n");
    }
    for (int i = 0; i < MAX; i++)
        dealokacja_OSOBA(&dane[i]);
    printf("KONIEC!");
    return 0;
}