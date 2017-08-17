#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
	char b[10];

	printf("Digite um numero: ");
	scanf("%d",&a);
	itoa(a,b,2);
	printf("\nO numero %d em binario e: %s",a,b);
	return 0;
}
