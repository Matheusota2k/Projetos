#include<stdio.h>

int main()
{

    int NumDecimal;
    char b[10];

    printf("Digite o valor decimal:");
    scanf("%d", &NumDecimal);

	printf("o resutado decimal em octal: %o \n", NumDecimal,NumDecimal);
	printf("%d em binario e: %s \n", NumDecimal, b);
	printf("%d em hexadecimal e: %X \n\n\n ", NumDecimal, NumDecimal);

}
