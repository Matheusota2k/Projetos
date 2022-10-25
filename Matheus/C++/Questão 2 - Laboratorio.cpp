#include<stdio.h>

struct biblioteca { 
	char	titulo_livro[50];
	char	nome_autor[50];
	float	codigo_num;
};

int	main() {
	
	struct biblioteca meu_livro;
	
	printf("Digite o titulo do livro:\n");
	scanf("%s", &meu_livro.titulo_livro);
	getchar();

	printf("Digite o nome do autor:\n");
	scanf("%s", &meu_livro.nome_autor);
	getchar();

	printf("Digite o codigo numerico:\n");
	scanf("%f", &meu_livro.codigo_num);

	printf("Dados sobre o livro:\n");
	printf("Titulo: %s\n", meu_livro.titulo_livro);
	printf("Autor: %s\n", meu_livro.nome_autor);
	printf("Codigo numerico: %.f\n", meu_livro.codigo_num);
}
