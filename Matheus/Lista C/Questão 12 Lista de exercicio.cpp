//Desenvolva um programa para comparar a idade de Pedro, de Joana e de Ismael einformar quem é o mais velho. Considere que essas pessoas possuem idades diferentes.
#include <stdio.h>
int main () {

    int pedro = 20;
    int joana = 18;
    int ismael = 25;

    if (pedro > joana && pedro > ismael) {
       
	    printf("Pedro e o mais velha");
    } else if (joana > pedro && joana > ismael) {
        
		printf("Joana e a mais velho");
    } else {
        printf("Ismael e o mais velho");
    }
    

    return 0;

}
