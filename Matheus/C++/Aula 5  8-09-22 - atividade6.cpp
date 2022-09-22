#include <stdio.h>


int main ()
{	
float valor_hora, qtd_horas, perc_inss, sal_bruto, valor_desc, sal_liquido;

//entrada
//valor da hora trabalhada 
//porcentagem do INSS (10%, 8,5% ...)

printf("Digite o valor da hora: \n");
scanf("%f", &valor_hora);

printf("Digite a quantidade de horas: \n");
scanf("%f", &qtd_horas);

printf("Digite o valor da porcentagem de desconto: \n");
scanf("%f", &perc_inss);

sal_bruto = valor_hora * qtd_horas;

valor_desc = (sal_bruto * perc_inss) / 100;

sal_liquido = sal_bruto - valor_desc;

printf("%f Salario liquido", sal_liquido);


	return 0;
}