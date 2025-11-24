#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3
#define FFLUSH while (getchar()!='\n');

void leggiStringa (char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
}


struct Lavoratori{
	char nome[30];
	char cognome[30];
	int stipendio;
};

int main(){

	int i;
	int media=0;
	int somma=0;
	struct Lavoratori l[N];
	

	for(i=0; i<N; i++){	
	
	
	printf("Inserisci Nome: \n");
	leggiStringa(l[i].nome,30);
 	printf("Inserisci Cognome: \n");
	leggiStringa(l[i].cognome,30);
	printf("Inserisci stipendio: \n");
	scanf("%d", &l[i].stipendio);
	FFLUSH
	somma=somma+l[i].stipendio;
	
	
	
	}
	
	media=somma/N;
	int massimo=l[0].stipendio;
	int minimo=l[0].stipendio;
	
	
	for(i=0; i<N; i++){
		if(l[i].stipendio>massimo){
			massimo=l[i].stipendio;
		}
		if(l[i].stipendio<minimo){
			minimo=l[i].stipendio;
		}
	}
	printf("Lo stipendio massimo e': %d\n", massimo);
	printf("Lo stipendio minimo e': %d\n", minimo);
	printf("Lo stipendio medio e': %d\n", media);
}
 
