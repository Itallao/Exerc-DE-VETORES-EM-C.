/*
  Tarefa 14-  Exercicio 8. Declarar um vetor de 10 posições já inicializado com os números de 1 a 10 e copiá-los para outro vetor na ordem inversa.

 AUTHOR: ITALLO RODRIGUES MORENO
*/




#include <stdio.h>  
#include <locale.h> 
#define TAM 10 
int main ()
{
	setlocale(LC_ALL, "Portuguese");
    
    
   int vet[TAM]= {1,2,3,4,5,6,7,8,9,10}, vet2[10], i, n= 10;

	

	for(i= n - 1; i >= 0; i--){
	
	printf("\nvet2[%i] = %i",vet2[i]);
	}
    
   
    
	   return 0;	
   
}
	
