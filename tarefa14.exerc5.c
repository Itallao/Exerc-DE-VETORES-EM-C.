/*
  Tarefa 14-  Exercicio 5. Receber 10 números e armazená-los em um vetor. Ao final, exibir quais foram os números negativos informados.

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
	
	for (i=0;i<LEN;i++) {
		if (vet[i]<0)
			printf("%d ", vet[i]);
	}
    
    
    
	return 0;	
   
}
	
