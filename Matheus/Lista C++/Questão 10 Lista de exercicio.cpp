#include <stdio.h>

int main(){

int num1;

printf("Por favor informe um numero: ");
scanf ("%d",&num1);

if (num1 % 2 == 0){
    
	printf ("O numero informado e par \n ", num1);
if (num1 > 15) {
            
	printf("O numero informado e maior que 15 ");
} 
	else {
    	printf("O numero informado nao e maior que 15");
}
}
    if (num1 % 2 != 0){
       
		printf ("O numero e impar \n ", num1);
    	if (num1 < 50) {
            
		printf("O numero informado e menor que 50");
        } else 
{
        
		printf("O numero informado nao e menor que 50 ");
}
}
    
    
    return 0;
}
