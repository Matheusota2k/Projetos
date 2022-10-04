//Escreva um programa que leia 3 notas de um aluno e a média (ME) das notas dosexercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA =(N1 + N2*2 + N3*3 + ME)/7. 
//A partir da média, informar o conceito de acordo com a tabela:
//maior ou igual a 9 Amaior ou igual a 7.5 e menor que 9 Bmaior ou igual a 6 e menor que 7.5 Cmaior ou igual a 4 e menor que 6 Dmenor que 4 E
#include <stdio.h>

int main()
{

    float notaA;
    float notaB;
    float notaC;
    
	printf("Digite sua primeira nota:");
    scanf("%f", &notaA);
    
    printf("Digite sua segunda nota:");
    scanf("%f", &notaB);
    
    printf("Digite sua terceira nota: ");
    scanf("%f", &notaC);

    float ME = (notaA + notaB + notaC) /3;
   
    float MA =(notaA + notaB*2 + notaB*3 + ME)/7 ;

    printf("Sua media ficou : %2.f \n", MA);

    if (MA >= 7.5 && MA < 9) {
      
	    printf("Sua nota esta classificada em A" );
    } else if (MA >= 6 && MA < 7.5) {
       
	    printf("Sua nota esta classificada em B");
    } else if (MA >= 4 && MA < 6) {
       
	    printf("Sua nota esta classificada em C");
    }

    return 0;
}
