
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
int primeiro_valor;
int segundo_valor;
int i, passo;

printf("informe o primeiro valor ");
scanf("%i",&primeiro_valor);
printf("informe o segundo valor");
scanf("%i",&segundo_valor);
if (primeiro_valor == segundo_valor){
   printf("valores iguais\n");
}else {
  if (primeiro_valor < segundo_valor) {
    printf("O primeiro valor e menor que o segundo \n");
    for(i=primeiro_valor;i<=segundo_valor;i++){
      printf("%i \n",i);
    };
    
  } else {
    printf("O segundo valor e menor que o primeiro\n");
    for(i=primeiro_valor;i>=segundo_valor;i--){
      printf("%i \n",i);
    };
  };
};
}

