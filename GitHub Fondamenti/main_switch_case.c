#include <stdio.h>

int main(){
	int scelta=0;
	int a=0;
	int b=0;
	int somma;
	int differenza;
	int prodotto;
	int quoziente;
	
do{
	printf("\n--------Menu--------\n");
	printf("1. Somma\n2. Differenza\n3. Moltiplicazione\n4. Divisione\n0. Esci");
	printf("\n--------------------\n");
	printf("\nQuale modalita' vuoi usare?\n");
	scanf("%d", &scelta);
	
	switch(scelta){
		
	case 1:
		printf("\nStai utilizzando la modalita' somma\n");
		printf("Inserisci il primo valore: ");
		scanf("%d", &a);
		printf("Inserisci il secondo valore: ");
		scanf("%d", &b);
		somma=a+b;
		printf("La somma dei numeri e': %d\n", somma);
	break;
		
	case 2:
		printf("\nStai utilizzando la modalita' differenza\n");
		printf("Inserisci il primo valore: ");
		scanf("%d", &a);
		printf("Inserisci il secondo valore: ");
		scanf("%d", &b);
		differenza=a-b;
		printf("La differenza dei numeri e': %d\n", differenza);
	break;
		
	case 3:
		printf("\nStai utilizzando la modalita' moltiplicazione\n");
		printf("Inserisci il primo valore: ");
		scanf("%d", &a);
		printf("Inserisci il secondo valore: ");
		scanf("%d", &b);
		prodotto=a*b;
		printf("Il prodotto dei numeri e': %d\n", prodotto);
	break;	
		
	case 4:
		printf("\nStai utilizzando la modalita' divisione\n");
		printf("Inserisci il primo valore: ");
		scanf("%d", &a);
		printf("Inserisci il secondo valore: ");
		scanf("%d", &b);
		quoziente=a/b;
		printf("Il quoziente dei numeri e': %d\n", quoziente);
	break;
	
	default: printf("\nScelta non valida\n");


	}
}while(scelta!=0);

}

