/*
  Tarefa 14 -  Exercicio 10. Receber 10 números inteiros e armazenar em um vetor. Imprimir os dados do vetor em ordem crescente.

 AUTHOR: ITALLO RODRIGUES MORENO
*/

#include <stdio.h>
#include <stdlib.h>



int main() {

	int i, x, aux, vet[10];
    
    for (i=0; i < 10; i++){
    	printf("Digite um valor %i  : ", i);
    	scanf("%i", &vet[i]);
    }
	
	    for (i=0; i < 10; i++){
	    
	    for(x=i+1; x<10; x++){
	    	
	    	if(vet[i]>vet[x]){
	    		aux=vet[i];
	    		vet[i] = vet[x];
	    		vet[x] = aux;
			}
	}	}
	    
	 for (i=0; i < 10; i++){
		printf("\n Valor da posicao %i agora é %i",i, vet[1]);
 	}
 return 0;
}
