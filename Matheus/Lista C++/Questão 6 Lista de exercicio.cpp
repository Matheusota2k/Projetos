#include <stdio.h>

int main(){

int preco;

printf("Digite o valor do produto: \n");
scanf("%i", &preco);

if(preco >= 100){

preco * 1.2;

} else {

 preco *  1.1;

}

printf("%d", preco);

}
