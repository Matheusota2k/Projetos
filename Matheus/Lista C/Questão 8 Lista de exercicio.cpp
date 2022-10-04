//Faça o programa que apresenta a seguinte saída, perguntando ao usuário o númeromáximo (no exemplo, 9). Este número deve ser sempre ímpar.
#include <stdio.h>
#include <conio.h>

int main () {
int n;
int i; 
int j; 
int l; 
int k;

printf ("Digite um numero impar para completar o triangulo: \n");

do {
    scanf ("%d", &n);
}

while (n%2 == 0);
   	l = 0;
  
   printf ("\n \n \n");

for (i = 1; i <= n; i++) {
       
	   for (k = 0; k < l; k++) {
        
		printf(" ");
       }

    printf ("%d ", i);

    for (j = i+1; j <= n; j++)
	printf ("%d ", j);
    
	n -= 1;
    printf ("\n");
    	l += 2;

}
   
   getch();

   return 0;

}
