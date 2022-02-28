/*
  Tarefa 14-  Exercicio  3. Receber 10 números e armazená-los em um vetor. Ao final, exibir o dobro de cada um dos números

 AUTHOR: ITALLO RODRIGUES MORENO
*/




#include <stdio.h>  
#include <locale.h> 
#define LEN 10
int main ()
{
		setlocale(LC_ALL, "Portuguese");
    
  
   int vet[LEN], i;
   
    for(i=0; i< LEN; i++){
    printf("\nDigite um valor para vet[%i]: ", i );
		scanf("%i", &vet[i]);
	}
	
	printf("\n");
	
	for(i=0; i < LEN; i++){
	printf("\n%i ", vet[i]* 2);
	}
	

    
    
	return 0;	
   
}
	
