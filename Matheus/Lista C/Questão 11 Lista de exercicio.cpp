//Codifique um programa que leia a quantidade de alunas e de alunos. Depois esseprograma deve informar se essa turma possui mais alunos ou mais alunas. 
//Se essa turmapossuir a quantidade de alunas maior que a de alunos, informe o total de alunos dessa turma.O programa deve verificar se a quantidade de alunos é igual a de alunas.
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
