#include <stdio.h>

int main(){
	
	int n=5;
	int array[n];
	int somma=0;
	int media;
	int i;
	
		for(i=0; i<n; i++){
			
			printf("Inserisci il valore della cella: %d\n", i);
			scanf("%d", &array[i]);
			
		}
		
		for(i=0; i<n; i++){
			
			somma=somma+array[i];
			media=somma/n;
		
			
			
		}	
		
		printf("La somma totale e': %d\n", somma);
		printf("La media e': %d\n", media);
		
}
