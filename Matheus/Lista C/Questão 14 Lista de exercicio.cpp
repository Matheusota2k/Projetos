//A conversão de graus Fahrenheit para Celsius é obtida por Tc={(Tf-32)x(5/9)}, em que Tcé a temperatura em Celsius e Tf em Fahrenheit. 
//Faça um programa C que calcule e queimprima uma tabela de graus Fahrenheit e graus Celsius, cujos graus variem de 40 a 75, de1 em 1
#include <stdio.h>

int main () {

float temp;

for(temp=45; temp<=75; temp++) {
    printf(" %.0f %c = %.1f %cF \n", temp , 248 , (((temp*9.0)/5.0)+32),248);
    }
}
