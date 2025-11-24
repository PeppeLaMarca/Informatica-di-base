#include <stdio.h>
    /* 
	SWITCH-CASE ci permette di eseguire diversi blocchi 
    di codice a seconda del valore assunto da una variabile.
    [switch (espressione)]---Valuta l'espressione (o variabile). 
    Il risultato dell'espressione viene confrontato con i valori specificati nei blocchi case.
	[case valore:]---Se il valore dell'espressione corrisponde a questo valore, 
	il codice sotto questo case viene eseguito.
	*/
int main(){
	
	char giorno;
	
	printf("Scrivi una lettera iniziale di un giorno\n");
	scanf("%c", &giorno); //leggiamo il carattere inserito dall'utente (con %c perchè è un carattere)
	
	
	// Inizio del costrutto switch-case
	// L'espressione da valutare è la variabile 'giorno'
	switch(giorno){
		
		case 'l': // Se l'utente inserisce'l' allora stampa Lunedì
				printf("Lunedi'\n");				
		break; /* 'break' è fondamentale: termina l'esecuzione all'interno dello switch
		        e impedisce che il codice passi al 'case m' successivo*/ 
		
		case 'm':	
				printf("Martedi'\n");		
		break;
		
		case 'g':
				printf("Giovedi'\n");	
			break;
				
		case 'v':
			    printf("Venerdi'\n");
		break;
			
		case 's':
			   printf("Sabato\n");
		break;
			
		case 'd':
				printf("Domenica\n");	
		break;
				
				
	    default: // [Caso di default:] viene eseguito se 'giorno' non corrisponde a nessuno dei case precedenti
	    	   printf("Carattere non valido\n");
			}
			
			
		
		
	}
	
	
		


