// Codifique um programa que indique a quantidade mínima de cédulas equivalente a umadada quantia. Considere apenas valores inteiros e cédulas de 1, 5, 10, 20, 50 e 100 reais.
#include <stdio.h>

int main (){
	int num, n100, n50, n20, n10, n5, n2, n1;
	
	printf("Digite o valor: ");
	scanf("%d", &num);
	
	n100 = num / 100;
	num = num - n100 * 100;
	
	n50 = num / 50;
	num = num - n50 * 50;
	
	n20 = num / 20;
	num = num - n20 * 20;
	
	n10 = num / 10;
	num = num - n10 * 10;
	
	n5 = num / 5;
	num = num - n5 * 5;
	
	n2 = num / 2;
	num = num - n2 * 2;
	
	n1 = num / 1;
	printf("\n");
	printf("%d notas de 100 reais\n" , n100);
	printf("%d notas de 50 reais\n" , n50);
	printf("%d notas de 20 reais\n" , n20);
	printf("%d notas de 10 reais\n" , n10);
	printf("%d notas de 5 reais\n" , n5);
	printf("%d notas de 2 reais\n" , n2);
	printf("%d notas de 1 real\n" , n1);
	
    return 0;
}
