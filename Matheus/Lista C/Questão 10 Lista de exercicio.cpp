//Faça um programa que receba um número inteiro e que verifique se esse número é parou ímpar. O programa deve informar se o número é par, 
//caso afirmativo informar também seé ou não maior que 15 ou se o número é ímpar, caso afirmativo informar se é ou não menorque 50.
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
