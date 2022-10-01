#include <stdio.h>

int main()
{

    float notaA;
    float notaB;
    float notaC;
    
	printf("Digite sua primeira nota:");
    scanf("%f", &notaA);
    
    printf("Digite sua segunda nota:");
    scanf("%f", &notaB);
    
    printf("Digite sua terceira nota: ");
    scanf("%f", &notaC);

    float ME = (notaA + notaB + notaC) /3;
   
    float MA =(notaA + notaB*2 + notaB*3 + ME)/7 ;

    printf("Sua media ficou : %2.f \n", MA);

    if (MA >= 7.5 && MA < 9) {
      
	    printf("Sua nota esta classificada em A" );
    } else if (MA >= 6 && MA < 7.5) {
       
	    printf("Sua nota esta classificada em B");
    } else if (MA >= 4 && MA < 6) {
       
	    printf("Sua nota esta classificada em C");
    }

    return 0;
}
