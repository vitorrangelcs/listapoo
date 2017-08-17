#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
 char pa[41],contra[41];
 int t,i,j,erro;

printf("Digite a palavra: ");
scanf("%s",&pa);

t = strlen(pa);
j = t;
t++;
j--;

for(i=0; i < t; i++) {
   contra[i] = pa[j];
   j--;
}

t--;

for(i=0; i < t; i++) {
   if(pa[i] != contra[i]) {
        erro = 1;
   }
}

            if(erro == 1) {
              printf("\nNao e palindromo.");
              }else{
               printf("\nEh palindromo.");}
    return 0;
}
