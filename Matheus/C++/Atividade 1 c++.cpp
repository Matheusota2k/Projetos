#include <stdio.h>

int main(){
	float nota1,nota2, soma;

	printf("Digite nota1:");
	scanf("%f", &nota1);
	printf("Digite nota2:");
	scanf("%f", &nota2);
	
	soma= nota1 + nota2;
	
	if(soma> 6.0)
	  
	   printf("APROVADO");
    
	else if (soma <= 6 && soma > 1)
	 
	   printf("REPROVADO");	
	
	else if(soma <= 1.0)
	   printf("FINAL");
	
}