#include <stdio.h>
#include <stdlib.h>
#define N 21

typedef struct towar
{
    unsigned int id;
    char nazwa[N];
    float cena;
} TOWAR;

int main(void) // argc - liczba argumentow, argv - argumenty
{
    TOWAR produkt = {.nazwa = "pralka", .cena = 899.99, .id = 1};
    TOWAR kopia_produkt;

    FILE *plik = fopen("dupka.bin", "rb+"); // format: uprawnienie/b - jesli binarny/ plus R/w

    if(plik == NULL) {
        printf("Wystapil blad odczytu pliku.");
        return 0;
    }

    fwrite(&produkt, sizeof(TOWAR), 1, plik);

    //WAZNE!!!!!
    rewind(plik);

    fread(&kopia_produkt, sizeof(TOWAR), 1, plik);

    printf("id: %u nazwa: %s cena %.2f zl",
           kopia_produkt.id, kopia_produkt.nazwa, kopia_produkt.cena);

    fclose(plik);
    return 0;
}