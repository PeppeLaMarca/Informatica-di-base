#include <stdio.h>

int main(){
	int scelta=0;
	int a=0;
	int b=0;
	int somma;
	int differenza;
	
do{
	printf("\n--------Menu--------\n");
	printf("1. Somma\n2. Differenza\n0. Esci");
	printf("\n--------------------\n");
	printf("\nQuale modalita' vuoi usare?\n");
	scanf("%d", &scelta);
	
	if(scelta==1){
		printf("\nStai utilizzando la modalita' somma\n");
		printf("Inserisci il primo valore: ");
		scanf("%d", &a);
		printf("Inserisci il secondo valore: ");
		scanf("%d", &b);
		somma=a+b;
		printf("La somma dei numeri e': %d\n", somma);
		
	}else if(scelta==2){
		printf("\nStai utilizzando la modalita' differenza\n");
		printf("Inserisci il primo valore: ");
		scanf("%d", &a);
		printf("Inserisci il secondo valore: ");
		scanf("%d", &b);
		differenza=a-b;
		printf("La differenza dei numeri e': %d\n", differenza);
		
		
	}
	
	}while(scelta!=0);

	

}


