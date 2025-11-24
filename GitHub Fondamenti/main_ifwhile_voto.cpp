#include <stdio.h>

int main(){
	int voto;
	printf("Inserisci voto: ");
	scanf("%d", &voto);
	
while(voto<0 || voto>10){
	
	printf("Il voto deve essere compreso tra 0 e 10\nInserisci nuovamente il voto: ");
	scanf("%d", &voto);
	
}
if(voto>=6){
	printf("Sei promosso\n");

}
else{
	printf("Sei bocciato\n");
}
}
 
 
