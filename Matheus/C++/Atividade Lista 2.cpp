#include <stdio.h>

int main(){
	int valor;
	prinft("Insira o preco do produto ");
	scanf("%i", &valor);
	if(valor >= 100){
		valor *=1.1;
	} else {
		valor *= 1.2;
	}
	printf("%d", valor);
}