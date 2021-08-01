#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Crie uma nova versão para o programa anterior, de forma que o limite inferior e limite superior sejam valores lidos.
    int limiteSuperior, limiteInferior;
    printf("\nDigite o valor maximo:");
    scanf("%i", &limiteSuperior);
    printf("\nDigite o valor minimo:");
    scanf("%i", &limiteInferior);
    while(limiteSuperior >= limiteInferior)
    {
        printf("\n%i", limiteSuperior);
        limiteSuperior = limiteSuperior - 1;
    }
    return 0;
}
