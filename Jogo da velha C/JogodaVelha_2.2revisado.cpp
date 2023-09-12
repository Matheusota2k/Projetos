#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <locale.h>

int **matriz;
int l, c, id;
int jogadas, empate, sair, rodando;
int escolha, esc, resposta, bot ,bot_tentativa;
char letra;
int retorno = -1;

struct t_dados{
	char jogador[30];
	int vitorias;
};
	t_dados dados[2];
void rank(){
    FILE *p;
    char str[80] = "ranking.txt";
	char f;

	p = fopen(str,"a+");	

 	if(dados[0].vitorias >0 || dados[1].vitorias >0 || empate == 1){
	   	fprintf(p,"%s ganhou %d vezes\n", dados[0].jogador, dados[0].vitorias);
	    fprintf(p,"%s ganhou %d vezes\n", dados[1].jogador, dados[1].vitorias);
 	    fclose(p);
	}else{
 	    p = fopen(str,"a+");
   		while (!feof(p)){
  	   		fscanf(p,"%c",&f);
        	printf("%c",f);
		}
			fclose(p);
	}
}
void tabela(){
			printf("\n");
      		printf("\tJogo da velha\n");
			printf("\n\n\t 0   1   2\n\n");
            for(l = 0; l < 3; l++){
                for(c = 0; c < 3; c++){
                    if(c == 0)
                        printf("\t");
                    	printf(" %c ", matriz[l][c]);
                    if(c < 2)
                        printf("|");
                    if(c == 2)
                        printf("  %d", l);
                }
                if(l < 2)
                    printf("\n\t-----------");
                	printf("\n");
           	}
}
void menu(){
	do{	
		printf("\tJogo da Velha");
		printf("\n1 - Jogar\n");
		printf("2 - Ver Ranking Geral\n");
		printf("3 - Créditos\n");
		printf("4 - Sair\n");
        printf("Digite o número da sua escolha: ");
        retorno = scanf("%d" , &escolha);
		do{
	  		letra = getchar();
	     	printf("%c", letra);
	        system("cls");
			if (escolha == 1){
				system("cls");
				do{
					printf("1 - Jogador vs Computador\n");
					printf("2 - Jogador vs Jogador\n");
		        	printf("Digite o número da sua escolha: ");
		        	retorno = scanf("%d" , &bot);
		        	do{
		            	letra = getchar();
		            	printf("%c", letra);
		            	system("cls");
		        	}while(letra != '\n');
		    	}while(retorno == 0 || bot != 1 && bot != 2);
				system("cls");
				if(bot == 1){
					fflush(stdin);
					printf("Nome de Usuario: ");
					gets(dados[0].jogador);
					strcpy(dados[1].jogador, "Computador");
					system("cls");
				}else
				if(bot == 2){
					fflush(stdin);
					printf("Nome do primeiro Usuario: ");
					gets(dados[0].jogador);
					fflush(stdin);
					printf("Nome do segundo Usuario: ");
					gets(dados[1].jogador);
					fflush(stdin);
					system("cls");
				}
			}else
			if (escolha == 2){
				system("cls");
				do{
					printf("Ranking Geral:\n");
					rank();
		        	printf("Digite (3) para retorna ou (4) para sair: ");
		        	retorno = scanf("%d", &esc);	
		        	do{    	       		
			            letra = getchar();
			            printf("%c", letra);
			            system("cls");          
		        	}while(letra != '\n');
		    	}while(retorno == 0 || esc != 3 && esc != 4);
		    	
				if(esc == 4){
					exit(0);
				}else 
				if(esc == 3){
	            	system("cls");          
				}	
					
			}else
			if (escolha == 3){
					system("cls");
				do{
					printf("\tCréditos\n");
					printf("Ryan do Nascimento Bezerra\n");
					printf("Matheus Farias Porto Dos Anjos\n");
					printf("Fábio Harley Silva Filho\n");
					printf("Gabriel Henriques Cassiano\n");
		        	printf("Digite (3) para retorna ou (4) para sair: ");
		        	retorno = scanf("%d", &esc);	
		        	do{
		            	letra = getchar();
		            	printf("%c", letra);
		            	system("cls");
		        	}while(letra != '\n');
		    	}while(retorno == 0 || esc != 3 && esc != 4);
				if(esc == 4){
					exit(0);
				}	
			}else
			if (escolha == 4){
				exit(0);
			}
  		}while(letra != '\n');
    }while(retorno == 0 || escolha != 1);	
}
void propriedade(){
	matriz = (int **) malloc(sizeof(int*)*3);
		
	for(l=0;l<3;l++){
		matriz[l] = (int *) malloc(sizeof(int*)*3);
		for(c=0;c<3;c++)
			matriz[l][c] = ' ';
	}
}
void interacao(){

	while(sair == 0){
		if(bot ==1 && jogadas %2 == 0){
			srand (time(NULL));
			l = rand() % 3 + 0;
			c = rand() % 3 + 0;
	
			bot_tentativa++;
			
            if(bot_tentativa > 5){
                for(l = 0; l < 3; l++){
                    for(c = 0; c < 3; c++)
                        if(matriz[l][c] == ' '){
                            matriz[l][c] = 'O';
                            l = 3;
                            c = 3;
                            bot_tentativa = 0;
                            sair = 1;
                        }
				}
			}else 
			if(matriz[l][c] == 'O' || matriz[l][c] == 'X'){
				jogadas--;
				break;
			}else 
			if(jogadas %2 == 0){
				matriz[l][c] = 'O';
				sair = 1;
			}	
		}else{
			do{
      	 		printf("\n %s - Coloque a coluna: ", dados[id].jogador);
       			retorno = scanf("%d",&c);
       			printf(" %s - Coloque a linha: ", dados[id].jogador);
       			retorno = scanf("%d",&l);
				do{
	       	 	    letra = getchar();
	           		printf("%c", letra);
	        	}while(letra != '\n');
    		}while(retorno == 0 || c < 0 || c >= 3 || l < 0 || l >= 3);			

			if(matriz[l][c] == 'O' || matriz[l][c] == 'X'){
				printf("\n\tPosicao Ocupada");
				Sleep(1000);
				jogadas--;
				break;
			}else 
			if(jogadas %2 == 1){
				matriz[l][c] = 'X';
				sair = 1;
			}else 
			if(jogadas %2 == 0){
				matriz[l][c] = 'O';
				sair = 1;
			} 			
		}	
	}
}
void VerificaVitoria(){				

	if(matriz[0][0] == 'X' && matriz[1][1] == 'X' && matriz[2][2] == 'X' || 
	   matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X'){
	   printf("\n\t%s (X), Venceu!", dados[0].jogador);
	   dados[0].vitorias++; 
	   rodando=0;
	}else 
	if(matriz[0][0] == 'X' && matriz[1][0] == 'X' && matriz[2][0] == 'X' ||
		matriz[0][1] == 'X' && matriz[1][1] == 'X' && matriz[2][1] == 'X' ||
		matriz[0][2] == 'X' && matriz[1][2] == 'X' && matriz[2][2] == 'X'){
		printf("\n\t%s (X), Venceu!", dados[0].jogador);
		dados[0].vitorias++;
		rodando=0;
	}else 
	if(matriz[0][0] == 'X' && matriz[0][1] == 'X' && matriz[0][2] == 'X' ||
		matriz[1][0] == 'X' && matriz[1][1] == 'X' && matriz[1][2] == 'X' ||
		matriz[2][0] == 'X' && matriz[2][1] == 'X' && matriz[2][2] == 'X'){
		printf("\n\t%s (X), Venceu!", dados[0].jogador);
		dados[0].vitorias++;
		rodando=0;
	}else 
	if(matriz[0][0] == 'O' && matriz[1][1] == 'O' && matriz[2][2] == 'O' ||
		matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O'){
		printf("\n\t%s (O), Venceu!", dados[1].jogador);
		dados[1].vitorias++;
		rodando=0;
	}else 
	if(matriz[0][0] == 'O' && matriz[1][0] == 'O' && matriz[2][0] == 'O'  ||
		matriz[0][1] == 'O' && matriz[1][1] == 'O' && matriz[2][1] == 'O' ||
		matriz[0][2] == 'O' && matriz[1][2] == 'O' && matriz[2][2] == 'O'){
		printf("\n\t%s (O), Venceu!", dados[1].jogador);
		dados[1].vitorias++;
		rodando=0;
	}else 
	if(matriz[0][0] == 'O' && matriz[0][1] == 'O' && matriz[0][2] == 'O' ||
		matriz[1][0] == 'O' && matriz[1][1] == 'O' && matriz[1][2] == 'O' ||
		matriz[2][0] == 'O' && matriz[2][1] == 'O' && matriz[2][2] == 'O'){
		printf("\n\t%s (O), Venceu!", dados[1].jogador);
		dados[1].vitorias++;
		rodando=0;				
	}else 
	if(jogadas == 9){
		printf("\nEmpate");
		rodando=0;				
		empate = 1;
	}
}
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	rodando = 1;
	menu();		

	do{	
		jogadas = 0;
		propriedade();
			
		while(rodando=1){
			system("cls");
			tabela();
			sair = 0;
	
			VerificaVitoria();
			if(rodando == 0){
				jogadas--;
				break;
			}		
			jogadas++;
		
			if(jogadas %2 == 1){
				id=0;
			}else 				
			if(jogadas %2 == 0){
				id=1;
			} 
			interacao();
		}
		do{	
			Sleep(1000);
			system("cls");
        	printf("\nDigite (3) para jogar novamente ou (4) para sair: ");
        	retorno = scanf("%d", &esc);	
        	do{
	            letra = getchar();
	            printf("%c", letra);
	            system("cls");
        	}while(letra != '\n');
    	}while(retorno == 0 || esc != 3 && esc != 4);
			if(esc == 4){	
				rank();
				exit(0);
			}
	}while(esc == 3);
	
//Libera memória da Matriz
	if (matriz!=NULL){
		for (l=0 ; l<3 ; l++){
			if (matriz[l] != NULL)
				free(matriz[l]);
		}
				free(matriz);
	}
}
