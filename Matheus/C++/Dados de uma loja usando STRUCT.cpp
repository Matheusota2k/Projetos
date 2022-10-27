#include<stdio.h>
#include<string.h>

struct Loja{
	int Escolha;
	char nome_loja[50];
	char endereco[50];
	float faturamento;
};

int main(){
	
	struct Loja dados;
	
	printf("Informe 0 para Matriz ou 1 para filial:");
	scanf("%d", &dados.Escolha);
	getchar();

	printf("Digite o nome da loja:");
	scanf("%[ -~]", &dados.nome_loja);
	getchar();
	

	printf("Informe o endereco da loja:");
	scanf("%[ -~]", &dados.endereco);
	getchar();
	
	
	printf("Escreva o faturamento dessa loja:");
	scanf("%f", &dados.faturamento);
	getchar();
	printf("\n");
	 
	if(dados.Escolha == 0){
		printf("Os dados foram salvos em matriz\n");
	}
	else if (dados.Escolha = 1){
		printf("Os dados foram salvos em filial\n");
	}
	
	printf("\nO nome da loja e:%s\n", &dados.nome_loja);
	
	printf("\nA loja fica no endereco:%s\n", &dados.endereco);
	
	printf("\nO faturamente dessa loja e:%.f\n", dados.faturamento);

	
	
}                                           