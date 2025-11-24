#include <stdio.h>


	
int incrementa (int n){
	n=n+1;
	printf("Il valore di n e': %d", n);
	return n;
}


int main(){
	int k=0;
	printf("Inserisci un numero: ");
	scanf("%d", &k);
	k=incrementa(k);
	printf("\nIl valore di k e': %d\n", k);
}

