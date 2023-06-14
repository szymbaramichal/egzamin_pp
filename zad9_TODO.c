#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **alokuj_tab_str(FILE *plik)
{
	char **tab = malloc(26*sizeof(char*));
	
	int i;
	for(i = 0; i < 26; i++)
	{
		char wiersz[100];
		
		if(fgets(wiersz, sizeof(wiersz), plik) != NULL)
		{
			int dlugosc = strlen(wiersz) - 1;
			tab[i] = malloc((dlugosc + 1)*sizeof(char));
			
			strcpy(tab[i], wiersz, dlugosc);
			tab[i][dlugosc] = '\0';
		}
		else
		{
			printf("Blad w odczytywaniu znakow z pliku");
			tab[i] = NULL;
		}
	}

	return tab;
}

void free_tab(char **tab)
{
	int i;
	for(i = 0; i < 26; i++)
	{
		free(tab[i]);
	}
	
	free(tab);
}

void print_tab(char **tab)
{
	if (tablica != NULL)
	{
        for (int i = 0; i < 26; i++)
		{
            puts(tablica[i]); 
        }
	}
}

int main(){
	
	FILE *plik = fopen("lec.txt", "r");
	if(plik == NULL)
	{
		printf("Blad!");
		exit(1);
	}
	
	char **tab = alokuj_tab_str(plik);
	
	print_tab(tab);
	free_tab(tab);
	
	fclose(plik);
	
	return 0;
}
