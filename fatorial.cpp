#include <stdio.h>
#include <stdlib.h>

int fatorial (int n ){
	if(n==0|| n==1)
	return 1; 
	else
	return n + fatorial(n-1);
	
}

int main(void){
	int n;
	
	printf("digite um valor  maior que zero:  " );
	scanf("%d",&n);
	
	printf("\n fatorial  de %d: %d \n ",n ,fatorial(n));
}