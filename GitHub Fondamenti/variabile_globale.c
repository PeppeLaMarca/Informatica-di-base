#include <stdio.h>
#include <stdlib.h>


int ovunque=5;//globale

void incrementa(int n){
	n=n+1;
	printf("Il nuovo valore e': %d", n);
}


int main(){
	int k;
	scanf("%d", &k);
	incrementa(k);
	printf("\nIl valore e': %d\n", ovunque);
}
