
#include <stdio.h>

int main(){
	
	int voto;
	int condotta;
	
	printf("\n----PAGELLA----\n");
	printf("\nInserisci la tua condotta: ");
	scanf("%d", &condotta);
	if(condotta<=6){
		printf("\nMi dispiace sei stato bocciato. RITENTA\n");
		return 0;
	}
	printf("\nInserisci il tuo voto: ");
	scanf("%d", &voto);
	
	
	if (voto>=6 && condotta>6) {
        printf("\nSei Promosso. CONGRATULAZIONI!!!\n");
	}
	else{
		printf("\nMi dispiace sei stato bocciato. RITENTA\n");
	}
}



