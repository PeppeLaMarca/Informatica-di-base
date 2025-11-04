#include <stdio.h>

int main(){
	int n=5;
	int massimo=0;
	int minimo=100;
	int array[n];
	int i;
	
		for(i=0; i<n; i++){
			
			printf("Inserisci numero: %d\n", i);
			scanf("%d", &array[i]);
			
		}
		
		for(i=0; i<n; i++){
			if(array[i]>massimo){
				massimo=array[i];
			}
			if(array[i]<minimo){
				minimo=array[i];
			}
			
		}
			printf("Il massimo e': %d\n", massimo);
			printf("Il minimo e': %d\n", minimo);
}

