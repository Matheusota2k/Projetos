#include <stdio.h>

int main(){
	int ano;
	int idade;
	
	printf("Digite o ano de nascimento: \n");
	scanf("%d", &ano);
	
	idade = 2022 - ano;
	
	if (idade >= 5 && idade <= 7)
	printf ("Infantil A");
	
	else if (idade >= 8 && idade <= 10)
	printf ("Infantil B");
	
	else if (idade >= 11 && idade <= 13)
	printf ("Juvenil A");
	
	else if (idade >= 14 && idade <= 16)
	printf ("Juvenil B");
	
	else if (idade >= 17 )
	printf ("Senior");
		
}