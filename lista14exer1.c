/*
   1. Receber 10 números e armazená-los em um vetor. 
   Ao final, exibir os 10 números na ordem que foram recebidos.
*/


#include <stdio.h>  
#include <locale.h> 

#define LEN 10

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	//Declarei um vetor com 10 elementos
	//os elementos do vetor nao foram inicializados
	int vet[LEN], i;
	
    //Recebendo valores para os 10 elementos
	for(i=0; i < LEN; i++){
		printf("\nDigite um valor para vet[%i]: ", i);
		scanf("%i", &vet[i]);
	}
	
	printf("\n");
	// imprime todos os elementos do vetor
	for(i=0; i < LEN; i++){
		printf("\nvet[%i]=%i", i, vet[i]);
	}
	
	
}
