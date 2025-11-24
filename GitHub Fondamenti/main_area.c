#include <stdio.h>

int main (void){
	int base, altezza, area;
	printf("%d\n", "inserisci base");
	scanf("%d" , &base);
	printf("%d\n", "inserisci altezza");
	scanf("%d", &altezza);
	area= base * altezza / 2;
	printf("%d\n", area);
}
