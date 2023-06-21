#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define W 8
#define K 12

void uzupelnij_wyswietl(char **tab);

int main(void)
{
    char tablica[W][K];
    uzupelnij_wyswietl(tablica);
    return 0;
}

void uzupelnij_wyswietl(char **tab)
{ 
    for (int i = 0; i < W; i++)
    {
        tab[i] = malloc(K * sizeof(char)); 
        for (int j = 0; j < K; j++)
        {
            char randomLetter = 'A' + rand() % 57;  
            while (randomLetter >= 91 && randomLetter <= 96)
            {
                randomLetter = 'A' + rand() % 57;  
            }
            tab[i][j] = randomLetter;
            printf("%c ", tab[i][j]);
        }

        printf("\n");

    }
}