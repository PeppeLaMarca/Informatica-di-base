#include <stdio.h>

int main(){
	int x;
	int *p=&x;
	
	printf("%p", (void*)&x);
}

