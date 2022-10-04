//Dados um número natural n, exiba seu fatorial n!.
#include <stdio.h>

int main(){
	
    int fator, num;
    
    printf("Digite um valor para calular o fatorial: ");
    scanf("%d", &num);
    
    for(fator = 1; num > 1; num = num - 1)
    fator = fator * num;
    printf("\nFatorial: %d", fator);
    
    return 0;
}
