#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

int main(void){

	clock_t tInicio, tFim;
    float tempo_gasto;
    //inicio da contagem de tempo gasto
    tInicio = clock();

	int cont=0;
	int x[5],n,i,aux;
	for(i=0; i<=4; i++){
		printf("digite o %d numero: ",i+1);
		scanf("%d",&x[i]);
	}

    //inicio da contagem de tempo gasto
    tInicio = clock();

	for(n=1; n<=5; n++){
		
		for(i=0; i<=3; i++){
			if(x[i]>x[i+1]){
				aux= x[i];
				x[i] = x[i+1];
				x[i+1]= aux;
			
			}
			cont++;	
		}
		
	}

	//Fim da contagem de tempo
    tFim = clock();

	//𝑇(𝑛) = (𝑛 - 1) + 1
    //Resultado final da contagem de tempo
    tempo_gasto = ((float)(tFim - tInicio)) / CLOCKS_PER_SEC;
	printf("Tempo gasto: %f s\n", tempo_gasto);
	
	for(i=0; i <=4; i++){
		
		for(i=0; i<5; i++){
		    printf( " [ " );
			printf("%d",x[i]);
			printf(" ] " );
		}
		
		printf("\n as alteracoes foram: %d \n",cont);
	}
}