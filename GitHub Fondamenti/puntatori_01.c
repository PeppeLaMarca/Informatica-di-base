#include <stdio.h>

void incrementa(int n){
	n++;
	printf("la copia di x e'= %d\n", n);
	printf("la copia di x ha indirizzo %p\n", (void*)&n);
}

int main(){
	int x=5;
	incrementa(x);
	printf("Il valore di x e'= %d\n", x);
	printf("L'indirizzo di x e'= %p\n", &x);
}
