#include<stdio.h>

enum dias_semana {
	domingo = 1,
	segunda = 2,
	terca = 3,
	quarta = 4,
	quinta = 5,
	sexta = 6,
	sabado = 7
};

int main() {

	enum dias_semana e_dia;
	
	printf("Digite: 1 para domingo");
	printf("\nDigite: 2 para segunda");
	printf("\nDigite: 3 para terca");
	printf("\nDigite: 4 para quarta");
	printf("\nDigite: 5 para quinta");
	printf("\nDigite: 6 para sexta");
	printf("\nDigite: 7 para sabado\n");
	scanf("%d", &e_dia);
	
	switch(e_dia)
	{
		case segunda:
			printf("Dia informado foi segunda");
			break;
		
		case terca:
			printf("Dia informado foi terca");
			break;
		
		case quarta:
			printf("Dia informado foi quarta");
			break;
		
		case quinta:
			printf("Dia informado foi quinta");
			break;
			
		case sexta:
			printf("Dia informado foi sexta");
			break;
			
		case sabado:
			printf("Dia informado foi sabado");
			break;
			
		case domingo:
			printf("Dia informado foi domingo");
			break;
			
		default:
			printf("O dia informado e invalido");
			break;
	}
}