#include <stdio.h>

int main(){
	int n=5;
	int array[n];
	int somma=0;
	int i;
	
	for(i=0; i<n; i++){
		printf("Inserisci il numero: %d\n", i);
		scanf("%d", &array[i]);
		
	}
	for(i=0; i<=n; i=i+2){
	
	somma=somma+array[i];
}
		printf("La somma nelle posizioni pari e': %d", somma);
}
