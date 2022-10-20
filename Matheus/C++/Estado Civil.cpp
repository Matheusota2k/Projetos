#include<stdio.h>

enum estado_civil {
	casada = 1,
	solteira = 2
};

int main() {
	
	enum estado_civil e_civil;
	
	printf("Digite 1 para casada e 2 para solteira\n");
	scanf("%d", &e_civil);
	switch(e_civil){
	
		case casada:
			printf("Voce e casada\n");
			break;
		case solteira:
			printf("Voce e solteira\n");
			break;
		default:
			printf("Nem casada nem solteira\n");
}
}