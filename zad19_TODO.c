#include <stdio.h>
#include <stdlib.h>

typedef struct wezel{
	struct wezel *lewy;
	struct wezel *prawy;
	int wartosc;
};

int main(){
	
	struct wezel **wlst;
	wlst = malloc(sizeof(struct *wezel));
	wlst ->	lewy = malloc(sizeof(struct wezel));
	wlst -> wartosc = 7;
	wlst -> prawy = malloc(sizeof(struct wezel));
	wlst -> lewy -> lewy = wlst -> prawy -> lewy;
	wlst -> lewy -> wartosc = 4;
	wlst -> lewy -> prawy = wlst -> prawy;
	wlst -> prawy -> lewy = wlst -> prawy;
	wlst -> prawy -> wartosc = 2;
	wlst -> prawy -> prawy = wlst -> lewy -> prawy;
	
	free(wlst);
}
