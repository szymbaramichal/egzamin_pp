#include <stdio.h>
#include <stdlib.h>

int** alokuj(int iloscWierszy) 
{
    int **arr = malloc(sizeof(int *));
    for (int k = 0; k <= iloscWierszy; k++)
    {
        arr[k] = malloc((iloscWierszy - k) * sizeof(int));
    }
    
    return arr;
}

void wypelnij_wyswietl(int **arr, int iloscWierszy)
{
    for (int i = 0; i < iloscWierszy; i++)
    {
        for (int j = 0; j <= iloscWierszy - i; j++)
        {
            arr[i][j] = j + 1;
        }
    }

    for (int i = 0; i < iloscWierszy; i++)
    {
        for (int j = 0; j < iloscWierszy - i; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}

int main() {

    int **arr = alokuj(4);
    wypelnij_wyswietl(arr, 4);
    return 0;
}