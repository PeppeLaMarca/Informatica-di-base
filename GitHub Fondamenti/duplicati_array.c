#include <stdio.h>
#define DIM 8

int main(){
int a[]={1,2,2,4,5,4,8,10};
int b[]={0,0,0,0,0,0,0,0};
int i, j;
int k=0;
int isPresent=0;
	
	printf("----Array Originale----\n");
	for(i=0; i<DIM; i++){
		printf("%d\n", a[i]);
	}
	
	
	for(i=0; i<DIM; i++){
		isPresent=0;
		for(j=0; j<DIM; j++){
		if(a[i]==b[j]){
			isPresent=1;
			//se incontro un duplicato me lo segno nel flag isPresent
		}
		
	}
	if(!isPresent){//se non è presente lo inserisco nel nuovo array
		b[k]=a[i];
		k++;
	}
	}
	printf("----Array senza duplicati----\n");
	for(i=0; i<DIM; i++){
		printf("%d\n", b[i]);
	}
}
 
