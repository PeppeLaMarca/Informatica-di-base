#include <stdio.h>

float media(float a, float b){
	float m;
	m=(a+b)/2;
	return m;//si può scrivere return (a+b)/2 e cancellare m=
}

int main(){
	float n1;
	float n2;
	float risultato;
	printf("Inserisci N1: ");
	scanf("%f", &n1);
	printf("Inserisci N2: ");
	scanf("%f", &n2);
	risultato=media(n1,n2);
	printf("La media e': %.1f\n", risultato);
}

