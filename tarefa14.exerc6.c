/*
  Tarefa 14-  Exercicio 6. Preencher automaticamente um vetor com todos os n�meros pares entre 1 e 100 e depois exibir os n�meros para o usu�rio

 AUTHOR: ITALLO RODRIGUES MORENO
*/


#include <stdio.h> 
#define TAM 49

int main (){ 
	
	int vet[TAM], i, val;
		
	for(i=0 ; i < TAM ; i++){ 
		vet[i] = (i*2) + 2;
	}
	
	for(i=0; i < TAM; i++){
		printf("%i ", vet[i]);
	}


	return 0;
}
