#include <stdio.h>

int main(){
	
	int n=5;
	int array[n];
	int i;
	int pari=0;
	int dispari=0;
	
		for(i=0; i<n; i++){
			printf("Inserisci numero: %d\n", i);
			scanf("%d", &array[i]);
		}
		
		for(i=0; i<n; i++){
			if(array[i]%2==0){  //si mette %2==0 per capire se da il resto o meno (per capire se è pari)
				pari++;         //incrementa il contatore dei numeri pari
				
			}else{
				dispari++; //incrementa e conta i numeri dispari
			}
		}
		printf("I numeri pari sono: %d\n", pari);
		printf("I numeri dispari sono: %d\n", dispari);
}
