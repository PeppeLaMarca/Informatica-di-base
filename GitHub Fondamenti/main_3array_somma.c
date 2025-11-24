#include <stdio.h>
#define DIM 3
#define N 5

int main (){
	
	int v1[DIM];
	int v2[DIM];
	int v3[DIM];
	int i;
	
	
	for(i=0; i<N; i++){
		
		printf("\nInserisci i valori del primo vettore: ");
		scanf("%d", &v1[i]);
	
	}
	
	for(i=0; i<N; i++){
	
		
		printf("\nInserisci i valori del secondo vettore: ");
		scanf("%d", &v2[i]);
	
	}
	for(i=0; i<N; i++){
	
		v3[DIM]=v1[i]+v2[i];
		
		printf("\nQuesti sono i valori del terzo vettore: %d", v3[DIM]);
		
	
	}
	
	
}


