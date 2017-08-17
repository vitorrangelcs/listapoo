#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, maior=0, menor=0,n;
    float peso[150];

    printf("Quantas pessoas serao pesadas? \n");
    scanf("%d",&n);
    for (i=0;i<n;i++){
      printf("Informe o peso %d:\n ", i+1);
      scanf("%f", &peso[i]);
      if(i==0){maior=peso[i];menor=peso[i];}
      if(peso[i]>maior){
        maior=peso[i];
      }
      else{
        if(peso[i]<menor){
            menor=peso[i];
        }
      }
    }
    printf("\nO maior peso eh %d", maior);
    printf("\nO menor valor eh %d", menor);
    return 0;
}

