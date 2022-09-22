#include <stdio.h>

int main()
{
	
	float taxa, ano, valor;
	
	printf("Digite o ano:");
	scanf("%d",&ano);
	
	printf("Digite o valor do carro:");
	scanf("%f", &valor);
	
	if (ano <= 1900){
	taxa = (valor * 0.01);
}

else {
	taxa = (valor * 0.015);
}
printf("%.f", taxa);
}