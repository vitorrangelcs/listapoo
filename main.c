#include <stdio.h>
#include <stdlib.h>
int main()
{
    int  i,  num, primo;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    primo = prim(num);
    if (primo == 1){
    printf("O numero %d eh primo.\n",num);
    }else{
    printf("O numero %d nao eh primo.",num);
    }
    return 0;
}

int prim(int a)
{
    int  i,  vz = 0, vlr;
    for (i = 1; i <= a && vz <= 3; i++)
    {
        if (a % i == 0)
        vz ++;
    }

    if (vz == 2)
    {
     vlr = 1;
    }
    else
    {
     vlr = 0;
    }

    return vlr;
}
