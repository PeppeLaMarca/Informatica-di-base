#include <stdio.h>

void incrementa(int *n){
	*n=*n+1;
	printf("n contiene l'indirizzo di x:  %p\n", (void*)n);
	printf("n ha indirizzo:  %p\n", (void*)&n);
}

int main(){
	int x=5;
	incrementa(&x);
	printf("Il valore di x e'= %d\n", x);
	printf("L'indirizzo di x e'= %p\n", (void*)&x);
}

