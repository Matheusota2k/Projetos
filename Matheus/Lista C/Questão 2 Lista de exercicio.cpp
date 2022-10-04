//Crie um programa que receba o valor da temperatura em Fahrenheit e imprime ocorrespondente em Celsius e em Kelvin:
#include <stdio.h>
int main(){

    float Celsius;
    int Fah , celsius;

    printf("Informe o valor em Fahrenheit: ");
    scanf("%d", &Fah);

    Celsius = (Fah - 32.0) * (5.0 / 9.0);
    celsius = (Fah - 32) * (5 / 9);

    printf("Celsius: %2.f\n", Celsius);

    return 0;
}
