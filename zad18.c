#include <stdio.h>
#include <stdlib.h>

struct lista_dwukierunkowa {
    struct lista_dwukierunkowa *lewy;
    struct lista_dwukierunkowa *prawy;
    int wartosc;
};

void dodaj_lista (struct lista_dwukierunkowa ** lista, int wartosc)
{
    struct lista_dwukierunkowa * nowy = (struct lista_dwukierunkowa*)malloc(sizeof(struct lista_dwukierunkowa));
    nowy->prawy = NULL;
    nowy->wartosc = wartosc;
    nowy->lewy = *lista;
	if (*lista != NULL)
    { 
        (*lista)->prawy = nowy;
    }

    *lista = nowy;
}

int main() {
    struct lista_dwukierunkowa *lista = NULL;
    dodaj_lista(&lista, 8);
    dodaj_lista(&lista, 3);
    struct lista_dwukierunkowa *wlst = lista;
    dodaj_lista(&lista, 5);
    dodaj_lista(&lista, 6);

    printf("%d", wlst->wartosc);

    return 0;
}