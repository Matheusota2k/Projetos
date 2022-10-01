#include <stdio.h>

int main(){

float nota1;
float nota2;
float media;

    do{

    do{
	
	printf("Digite a primeira nota: \n");
	scanf("%f",&nota1);

    if(nota1 == 50){
        break;
}
    printf("Digite a segunda nota: \n");
    scanf("%f",&nota2);

	if((nota1 < 0), (nota1 > 10), (nota2 < 0), (nota2 > 10)){
                
		printf("Escreva as notas novamente: \n");
}
        
}
while((nota1 < 0), (nota1 > 10), (nota2 < 0), (nota2 > 10));

        if(nota1 == 50){
            break;
}

        media = (nota1 + nota2)/2;
        printf("Media Final: %.2f\n", media);

    }
	while(nota1 != 50);
    
    return(0);
}
