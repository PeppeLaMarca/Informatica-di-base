#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(){
	
int a[N];
int i;


/*
	printf("Valori inseriti dall'utente\n");
	
	
	for(i=0; i<N; i++){
	
	printf("Inserisci numero: %d\n", i);
	scanf("%d", &a[i]);
	}
	*/

	printf("Valori casuali\n");
	
		
		srand(time(NULL));
	
	for(i=0; i<N; i++){
		
		a[i]=rand ();
		printf("a[i] = %d\n", a[i]);
		
	}
}


