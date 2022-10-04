//Faça um programa que lê o preço de um produto e inflaciona esse preço em 10% se elefor menor que 100 e em 20% se ele for maior ou igual a 100. 
//OBS: não use o comando "if"ou o operador de condição "?".
#include <stdio.h>
#include <math.h>

int main(){
	float preco, n10, n20;
	int escolha;
	n10 = n20 = 0;
	
	printf("Preco do produto: ");
	scanf("%f", &preco);

	
	switch(preco >= 100)
	{
		case false:
			n10 = (preco * 10/100) + preco;
			printf("Novo preco: R$%.2f\n", n10);
			break;
		case true:
			n20 = (preco * 20/100) + preco;
    		printf("Novo preco: R$%.2f\n", n20);
    		break;
    	default:
        	printf("invalido \n"); 
        	break;
    }
	return 0;
}
