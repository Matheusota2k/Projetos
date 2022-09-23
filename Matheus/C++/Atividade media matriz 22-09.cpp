#include <stdio.h>

int main () {
	
	float nota1;
	float nota2;
	float media;
	char i;
	
	do {
	
	printf("Digite a primeira nota \n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota \n");
	scanf("%f", &nota2);
	printf("Deseja fazer outra media, apos esta? (s/n)");
	scanf("%s", &i);
	
	media = nota1 + nota2;
	
	if (media > 6)
	printf ("Aprovado \n");
	
	else if (media <= 6 && media > 1)
    printf("Reprovado \n");
		
    else if(media <= 1)
    printf("Final \n");
    
    
} while (i == 's');
}