#include <stdio.h>

int main()
{
	int num_int;
	
	printf("Digite um numero inteiro:");
	scanf("%d",&num_int);
	
	if (num_int %2 == 0)
	    printf("O numero %d e par\n", num_int);
   else
      printf("O numero %d e impar\n", num_int);

}