#include <stdio.h>

int main(void) {

	int k, i, ult=1, pen=0, atual, termos, par, soma=1, primo=1;
	scanf("%i", &k);
	
	printf("%i %i ", pen, ult);
	for (termos=3; termos<=k; termos++) {
		atual = ult + pen;
		pen = ult;
		ult = atual;
		printf("%i ", atual);
		
		if (atual % 2 == 0) {
			par = atual;
		}
		soma+=atual;
	} 
	
	printf("\nSoma: %i \nMaior par: %i", soma, par);
	
	
	for (i=2; i<=atual/2; i++) {
		if (atual%i == 0) {
			primo = 0;
			printf("\nDividiu por %i \n", i);
			break; 
		}
	}
	
	if (primo) {
		printf("%i", par);
	} else {
		printf("%i", soma);
	}
	return 0;
}