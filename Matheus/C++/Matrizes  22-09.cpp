#include <stdio.h>
int main(){
 int num[3][3];
 int i;
 int m;
  
 for(i=0;i<3;i++)
 for(m=0;m<3;m++){
 printf("Coluna[%d][%d]= ",i,m);
 scanf("%d",&num[i][m]);
 }
 
 printf("Numeros por coluna: \n");
 for(i=0;i<3;i++){
 for(m=0;m<2;m++)
 printf("%d - ",num[i][m]);
 printf("%d\n",num[i][m]);
 }
 return 0;
 }
