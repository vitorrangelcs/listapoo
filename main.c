#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[61];
    int i,n;
    float salario,novosal;
    printf("informe o numero de salarios a serem alterados\n");
    scanf("%d",&n);
     for(i=1;i<=n;i++){
    printf("Informe o nome\n");
    scanf("%s",&nome);
    printf("Informe o salario\n:");
    scanf("%f",&salario);

    if(salario<=150){
        novosal=salario*0.25;
        novosal=salario+novosal;
        printf("Novo Salario %f\n",novosal);
    }
     if(salario>150 && salario<=300){
        novosal=salario*0.2;
        novosal=salario+novosal;
        printf("Novo Salario %f\n",novosal);
    }
    if(salario>300 && salario<=600){
        novosal=salario*0.15;
        novosal=salario+novosal;
        printf("Novo Salario %f\n",novosal);
    }
    if(salario>600){
        novosal=salario*0.1;
        novosal=salario+novosal;
        printf("Novo Salario %f\n",novosal);
    }
    }

    return 0;
}

