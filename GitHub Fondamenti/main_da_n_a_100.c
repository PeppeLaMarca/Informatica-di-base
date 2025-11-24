#include <stdio.h>

int main (){
	int somma=0, n, i;
	
	printf("Inserisci N= ");
	scanf("%d", &n);
	for(i=0; i<=n; i++){
		if(i%2==0){
			somma=somma+i;
			printf("ciclo %d - = %d\n", i, somma);
			
		}
		else{
			printf("%d e' dispari\n", i);
		}
	}
	print("Somma finale = %d\n", somma);
}
	
	
