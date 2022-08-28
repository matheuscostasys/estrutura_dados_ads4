#include <stdio.h>
#include <stdlib.h>

float calculaMenor(float A[],int n){
	float x;
	x= A[0];
	for(int i =1; i < n; i++){
		if(A[i]<x)
		x=A[i];
	}
	return x;
}
float calculaMaior(float A[],int n) {
float x;
x=A[0];
for(int i = 1; i < n; i++){
	if(A[i]> x)
	x=A[i];
}
return x;
}

int main(void) {
	float menor, maior,temp[12];
	int tam;
	
	for(int i=0; i<12; i++){
		printf("digite a temperatura do mês %d : ",i+1);
		scanf("%f",&temp[i]);
	}
	tam = sizeof(temp)/sizeof(float);
	
	menor = calculaMenor(temp, tam );
	maior = calculaMaior(temp, tam );
	printf("a maior temperatura foi de %2.f e a menor temperatura foi %.2f ",maior,menor);
	}
