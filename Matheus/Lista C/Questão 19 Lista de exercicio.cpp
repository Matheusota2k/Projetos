//Escreva um programa para informar o maior elemento de um vetor de 5 posições do tipointeiro.
#include <stdio.h>

int main(){
	int vetor[5], i, maior = 0;
	
	for(i = 0; i < 5 ; i++){
		printf("Digite um valor inteiro positivo: ");
		scanf("%d", &vetor[i]);
	}
	for(i = 0; i < 5; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}
	printf("\n");
	for(i = 0; i < 5; i++){
		printf("%d \t", vetor[i]);
	}
	printf("\n");
	printf("\nMaior valor: %d\n", maior);
		
return(0);
}
