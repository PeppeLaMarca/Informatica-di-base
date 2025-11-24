#include <stdio.h>

int main (void){
	int base, altezza, area;
	printf("inserisci base = ");
	scanf("%d" , &base);
	printf("inserisci altezza = ");
	scanf("%d", &altezza);
	area= base * altezza / 2;
	printf("area:");
	printf("%d", area);
}
