//Escreva um algoritimo em C para ler 5 números, um de cada vez, e ir armazenando-o em um vetor. Em seguida exiba os valores desse vetor em ordem crescente dos índices e em ordem decrescente dos índices

#include <stdio.h>

int main(){
	
	float num[5];
	int i;
	
	for (i=0 ; i<5 ; i++){
		printf("Digite 5 numeros %d:", i);
		scanf("%f", &num[i]);
	}
	
	for(i = 0 ; i < 5 ; i++){
	printf("%.f \t", num[i]);
}
	for(i = 4 ; i >= 0; i--){
		printf("%.f \t", num[i]);
}
}