#include <stdio.h>
#include <stdlib.h>
#define N 21

typedef struct towar
{
    unsigned int id;
    char nazwa[N];
    float cena;
} TOWAR;

int main(int argc, char *argv[]) // argc - liczba argumentow, argv - argumenty
{
    TOWAR produkt = {.nazwa = "pralka", .cena = 899.99, .id = 1};
    TOWAR kopia_produkt;

    FILE *plik = fopen(argv[1], "rw");
    if(plik == NULL)
    {
        return 0;
    }

    fprintf(plik, "s");

    printf("id: %u nazwa: %s cena %.2f zl",
           kopia_produkt.id, kopia_produkt.nazwa, kopia_produkt.cena);


    fclose(plik);

    return 0;
}