/*
  Tarefa 14-  Exercicio 7 Declarar um vetor de 10 posições já inicializado com os números de 1 a 10 e copiá-los para outro vetor.

 AUTHOR: ITALLO RODRIGUES MORENO
*/




#include <stdio.h>  
#include <locale.h> 

int main ()
{
		setlocale(LC_ALL, "Portuguese");
    
    
   int vet= {1,2,3,4,5,6,7,8,9,10}, vet2[10],i;

	
	for(i=0; i<10; i++){
    printf("\n vet2[%i] = %i ", vet2[i], i);
    }

    
    
   
    
	   return 0;	
   
}
	
