#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Calculo de uma operação de segundo grau
    float a, b, c, x, r;
    printf("Digite o valor de a:");
    scanf("%f",&a);
    if (a!=0)
    {
        printf("\nDigite o valor de b:");
        scanf("%f",&b);
        printf("\nDigite o valor de c:");
        scanf("%f",&c);
        printf("\nDigite o valor de x:");
        scanf("%f",&x);
        r = a * pow(x,2) + b * x + c;
        printf("\n %f",r);
    }
    else
    {
        printf("Impossivel equacao de segundo grau");
    }
    return 0;
}
