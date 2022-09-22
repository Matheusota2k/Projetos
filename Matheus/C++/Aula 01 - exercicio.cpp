/*Faça um programa que leia duas notas e calcule a media destas notas e aprensete o resultado
*/

#include <stdio.h>

int main (){

	
	float nota1, nota2, media;
	int i, qtd_vezes;
	
	printf("Informe quantas vezes vai repetir o calculo:");
	scanf("%d", &qtd_vezes);
	
	for (i = 1; i <= qtd_vezes; i++){

	//Entrada, pegar do teclado dois valores float 

	printf("Informe duas notas:");
	scanf("%f %f", &nota1, &nota2);
	
	//processamento, calcular a media dos valores
	
	media = (nota1 + nota2) / 2.0;
	
    //saida, mostrar a media 

    printf("A media calculada foi %.2f\n", media );
    
}
}
