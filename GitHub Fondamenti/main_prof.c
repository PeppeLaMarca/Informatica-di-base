#include <stdio.h>

 int main(){
 	
 	int dim=1;
 	int v1[dim], v2[dim], v3[dim];
 	int i;
 	
 	
 	
 	printf("----Vettore1----\n");
 	for(i=0; i<dim; i++){
 		printf("v1[%d] = ", i);
 		scanf("%d", &v1[i]);
	 }
	 
	 printf("----Vettore2----\n");
	 for(i=0; i<dim; i++){
 		printf("v2[%d] = ", i);
 		scanf("%d", &v2[i]);
	 }
 	
 	printf("----Vettore3----\n");
	 for(i=0; i<dim; i++){
	 	v3[i]=v1[i]+v2[i];
 		printf("v3[%d] = %d\n ", i, v3[i]);
	 }
 	
 	
 	return 0;
 }
