#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

void entrada (int *vet,int n){
	for(int i =0; i<n; i++){
		 printf("digite o %d numero: \n ", i+1);
		 scanf("%d",&(*(vet+i)));
	}
}

void imprimir (int *vet, int n ){
	printf("[ "); 
	for(int i =0; i < n; i++){
		printf("%d ",*(vet+i));		
	}
	printf("]\n");
}

void insertion_sort(int *vet, int n ){
	int i, j,eleito;
	for(i=1; i<5; i++){
		eleito = *(vet+i);
		j= i -1;
		while(j >=0 && *(vet+j)>eleito){
		*(vet+j+1)= *(vet+j);
		j=j -1;		
	}
	*(vet+j+1)=eleito;
	}
	
}

int main(void){
	int x[5];
	int tam = sizeof(x)/sizeof(int);
	clock_t tInicio, tFim;
    float tempo_gasto;
	entrada(x, tam);
	imprimir(x,tam);
	//inicio da contagem de tempo gasto
    tInicio = clock();
	insertion_sort(x,tam);
	//Resultado final da contagem de tempo
    tempo_gasto = ((double)(tFim - tInicio)) / CLOCKS_PER_SEC;	
	printf("Tempo gasto: %f s\n", tempo_gasto);
	imprimir(x,tam);
}