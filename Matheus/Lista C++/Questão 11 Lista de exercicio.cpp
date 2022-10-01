#include <stdio.h>

int main (){

int alunosF;
int alunosM;

    printf ("Digite o numero de alunos:");
    scanf("%d", &alunosM);

    printf ("Digite o numero de alunas:");
    scanf("%d", &alunosF);

    if(alunosM > alunosF) {
        
	printf ("A quantidade de alunos e maior");
        
} else {

    printf ("A quantidade de  alunas e maior \n \n");
    
    printf ("A quantidade de alunos na sala sao (%d)" , alunosM);

}
    
}
