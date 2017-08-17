#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,d,cos,dt,altura;
    printf("informe a distancia\n");
    scanf("%f",&d);
    printf("informe o angulo \n");
    scanf("%f",&a);

    cos=1-(pow(a,2)/2)+(pow(a,4)/24)-(pow(a,6)/720)+(pow(a,8)/40320)-(pow(a,10)/3628800)+(pow(a,12)/479001600)-(pow(a,14)/87178291200)+(pow(a,16)/20922789888000)-(pow(a,18)/6402373705728000)+(pow(a,20)/2432902008176640000);
    dt=(d*cos);
    printf("Dhor %f\n",dt);
    altura=sqrt((pow(d,2))-(pow(dt,2)));
    printf("altura %f",altura);
    return 0;
}

