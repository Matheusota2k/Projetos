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
