#include <stdio.h>
#define DIM 10

int main(){
	
	
	int v[DIM];
	v[0]=1;
	v[1]=2;
	int i;
	
		for(i=2; i<DIM; i++){
			
			v[i]= v[i-1] + v[i-2];
		
	}
		for(i=0; i<DIM; i++){
		
			printf("%d\n", v[i]);
	}
	
}
 
