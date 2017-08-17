#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario[50],total,media;
    int i,acima,n;
    printf("informe o numero de funcionarios\n");
    scanf("%d",&n);
    acima=0;
    for(i=1;i<=n;i++){
        printf("Informe o salario do funcionario %d\n",i);
        scanf("%f",&salario[i]);
        total=total+salario[i];
    }
    media=total/n;
    printf("media salarial %f\n",media);
    for(i=1;i<=n;i++){
        if(media>=salario[i]){
            printf("funcionario %d tem o salario dentro da media\n",i);
        }else{
        printf("O funcionario %d, tem o salario acima da media\n",i);
        acima=acima+1;
        }

    }
    printf("Funcionarios acima da media salarial %d\n",acima);
    return 0;
}
