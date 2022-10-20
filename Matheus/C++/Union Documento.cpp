#include<stdio.h>


union documento 
{
	char cpf[11];
	char cnpj[14];

};

int main()
{
	union documento doc;
	
	printf("Informe um CPF com 11 digitos: \n");
	scanf("%s", &doc.cpf);
	printf("O CPF informado foi %s", doc.cpf);

	
	printf("\nInforme um CNPJ com 14 digitos: \n");
	scanf("%s", &doc.cnpj);
	printf("O CNPJ informado foi %s", doc.cnpj);

}