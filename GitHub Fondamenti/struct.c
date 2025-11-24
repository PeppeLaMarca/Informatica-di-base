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


struct Persona{
	char nome[30];
	char cognome[30];
	int eta;
};

int main(){
	
	int a[N];
	int i;
	struct Persona p;
	
	for(i=0; i<N; i++){	
	
	
	printf("Inserisci Nome: \n");
	leggiStringa(p.nome,30);
	printf("Inserisci Cognome: \n");
	leggiStringa(p.cognome,30);
	printf("Inserisci eta': \n");
	scanf("%d", &p.eta);
	FFLUSH;
	
	}
	
}

