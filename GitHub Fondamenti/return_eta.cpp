#include <stdio.h>

int calcolaEta(int annoNascita, int annoAttuale){

	return annoAttuale-annoNascita;
}
int main(){
	int a1;
	int a2;
	printf("Inserisci Anno Attuale: ");
	scanf("%d", &a1);
	printf("Inserisci il tuo Anno di Nascita: ");
	scanf("%d", &a2);
	int anni= calcolaEta(a1,a2);
	if(anni<0){
		anni=-anni;
		
	}else{
		anni=anni;
	}
	printf("\nHai %d anni", anni);
}

