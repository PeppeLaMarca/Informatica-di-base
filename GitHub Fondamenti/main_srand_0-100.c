#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10




int main(){
	
	int a[N];
	int i, j, tmp;
	int max=100;
	int min=0;
	
	srand(time(NULL));
	
		for(i=0; i<N; i++){
			
			a[i]=rand()%(max-min+1)+min;
			printf("a[i] = %d\n", a[i]);
		}
		
		for(i=0; i<N-1; i++){
			for(j=0; j<N-1; j++){
				if(a[j]>a[j+1]){
				
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
		}
	printf("Array ordinato\n");
	for(i=0; i<N; i++){
		printf("a[i]= %d\n", a[i]);
	}
		
		
		
}
 
