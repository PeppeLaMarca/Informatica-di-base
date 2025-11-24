#include <stdio.h>

int main (){
	
	int v1[10];
	int v2[10];
	int v3[10];
	int i;
	
	
	for(i=0; i<10; i++){
		
		printf("\nInserisci i valori del primo vettore: ");
		scanf("%d", &v1[i]);
	
	}
	
	for(i=0; i<10; i++){
	
		
		printf("\nInserisci i valori del secondo vettore: ");
		scanf("%d", &v2[i]);
	
	}
	for(i=0; i<10; i++){
	
		v3[10]=v1[i]+v2[i];
		
		printf("\nQuesti sono i valori del terzo vettore: %d", v3[10]);
		
	
	}
	
	
	}


