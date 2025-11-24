#include <stdio.h>



int main(){
	
	int age;
	char gender;
	
	printf("\nInserisci il tuo genere(U-D): ");
	scanf("%c", &gender);
	printf("\nInserisci la tua eta': ", age);
	scanf("%d", &age);
	
	if (gender != 'U' && gender != 'D') {
        printf("\nInput non valido. Devi inserire 'U' o 'D'. Chiusura del programma.\n");
	}

	if (age>=18 || gender=='D'){
		printf("\nPuoi entrare\n");
	}
	else{
		printf("\nNon soddisfi i requisiti per entrare\n");
	}
}

