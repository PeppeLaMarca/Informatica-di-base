#include <stdio.h>

float main(void){
	float base, altezza, area;
	printf("Inserisci Base = ");
	scanf("%f", &base);
	printf("Inserisci Altezza = ");
	scanf("%f", &altezza);
	area= base * altezza / 2;
	printf("Area: ");
	printf("%f", area);
	
}

