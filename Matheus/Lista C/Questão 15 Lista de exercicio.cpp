//Faça um programa que mostre todos os números pares existentes entre 1 e 50. 
#include <stdio.h>
int main () {
	
int i;
    
for(i=0; i<=50; i++) {
 
    if(i%2==0) {
        printf("%d \n", i);
    }
}
return 0;
}
