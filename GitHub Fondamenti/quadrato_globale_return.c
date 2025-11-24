#include <stdio.h>

int quadrato(int n){
	n=n*n;
	return n;
}

int main(){
	int k=0;
	printf("Inserisci numero: ");
	scanf("%d", &k);
	k=quadrato(k);
	printf("Il quadrato del numero e': %d\n", k);
}

