#include<stdio.h>

union patrim  //formato da placa de patrimonio depedendo do tipo de mobilia
{
	long nro_id; //mobilias com patrimonio numerico
	char char_id; //mobilias com patrimonio alfanumericos
};

int main()
{
	union patrim mobilia;
	int tipo_placa;
	
	
	printf("Informe o tipo da placa de patrimonio (1 - numerico \t0 - alfanumerico)\n");
	scanf("%d", &tipo_placa);
	
	if(tipo_placa ==1)
	{
		printf("Mobilia com placa numerica\n");
		scanf("%d", &(mobilia.nro_id));
		printf("\nA mobilia tem placa numerica %d\n", mobilia.nro_id);
}
	else
	{
		printf("Mobilia com placa alfanumerica\n");
		scanf("%s", &(mobilia.char_id));
		printf("A mobilia tem placa alfanumerica %s\n", mobilia.char_id);
}	

}