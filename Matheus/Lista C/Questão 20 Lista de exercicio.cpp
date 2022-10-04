//Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabética
#include <stdio.h>
#include <strings.h>


int main(){

    char palavra1[10];
    char palavra2[10];
    int retorno;

    printf("Digite o primeiro nome: \n");
    scanf("%s", &palavra1);
    printf("Digite o segundo nome: \n");
    scanf("%s", &palavra2);

    retorno = strcoll(palavra2, palavra1);
    printf("\n");
    printf("Em ordem alfabetica: \n");
    if(retorno==1){
        printf("-%s\n-%s\n", palavra1,palavra2);
    } else {
        printf("-%s\n-%s\n", palavra2,palavra1);
    }

return 0;

}
