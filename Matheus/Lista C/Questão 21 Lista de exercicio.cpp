//Escreva um programa que leia doze números do tipo inteiro ao usuário. 
//Separe esses números em pares e ímpares e os armazenem em dois outros vetores separando pares eímpares, exibindo os resultados na tela
#include <stdio.h>
int main(){
	int num[12], par[12], impar[12], i, Vpar = 0, Vimpar = 0;
	
	for(i = 0; i < 12; i++){
		printf("Digite o numero %d: ", i + 1);
		scanf("%d",&num[i]);	
	}
	for(i = 0;i < 12; i++){
		if(num[i] % 2 == 0){
			par[Vpar] = num[i];
			Vpar++;
		}
		else{
			impar[Vimpar] = num[i];
			Vimpar++;
		}
	}
	printf("\n");
	printf("\nValores: \n");
	printf("\n");
	for(i = 0; i < 12; i++){
		printf("%d\t",num[i]);
			
	}
	printf("\n");
	printf("\nPares:\n");
	printf("\n");
	for(i = 0; i < Vpar; i++){
		printf("%d\t", par[i]);
			
	}
	printf("\n");
	printf("\nImpares:\n");
	printf("\n");
	for(i = 0; i < Vimpar; i++){
		printf("%d\t", impar[i]);
				
	}
	
return(0);
}
