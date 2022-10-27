#include<stdio.h>

struct Veiculo 
{
	char nome_carro[25];
	char marca[25];
	int ano_fabricacao;
	float valor;
};

int main(){
	
	struct Veiculo carro; 
	
	printf("Informe o nome do veiculo:\n");
	scanf("%s", carro.nome_carro);
	
	printf("Informa a marca do veiculo:\n");
	scanf("%s", carro.marca);
	
	printf("Informe o ano da fabricacao do veiculo:\n");
	scanf("%d", &carro.ano_fabricacao);
	
	printf("Informe o valor do veiculo:\n");
	scanf("%f", &carro.valor);
	
	printf("%s\n%s\n%d\n%.f", carro.nome_carro, carro.marca, carro.ano_fabricacao, carro.valor);
}