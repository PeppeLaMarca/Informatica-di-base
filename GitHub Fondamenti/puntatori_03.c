#include <stdio.h>

void somma(int *a, int *b, int *risultato){
	*risultato = *a + *b;
	printf("l'indirizzo di a nella funzione e':  %p\n", (void*)&a);
	printf("l'indirizzo di b nella funzione e':  %p\n", (void*)&b);
	printf("l'indirizzo di risultato nella funzione e':  %p\n", (void*)&risultato);//indirizzo di risultato dentro somma
    printf("l'indirizzo di a nella funzione e':  %p\n", (void*)a);
	printf("l'indirizzo di b nella funzione e':  %p\n", (void*)b);
	printf("l'indirizzo di risultato nella funzione e':  %p\n", (void*)risultato);//contenuto risultato dentro somma

}

int main(){
	int risultato;
	int a; 
	int b;
	printf("Inserisci a-->");
	scanf("%d", &a);
	printf("inserisci b-->");
	scanf("%d", &b);
	somma(&a, &b, &risultato);
	printf("l'indirizzo di a nel main e':  %p\n", (void*)&a);
	printf("l'indirizzo di b nel main e':  %p\n", (void*)&b);
	printf("L'indirizzo del risultato e'= %p\n", (void*)&risultato);
	printf("Il risultato e'--> %d\n", risultato);
}

