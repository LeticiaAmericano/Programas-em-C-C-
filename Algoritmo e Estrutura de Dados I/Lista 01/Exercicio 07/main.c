#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Calcular o maior entre três valores lidos.
    float primeiroValor, segundoValor, terceiroValor;
    printf("Digite o primeiro valor:");
    scanf("%f",&primeiroValor);
    printf("\nDigite o segundo valor:");
    scanf("%f",&segundoValor);
    printf("\nDigite o terceiro valor:");
    scanf("%f",&terceiroValor);
    if (primeiroValor>segundoValor)
    {
        if (primeiroValor>terceiroValor)
            printf("\nO primeiro valor e maior");
        else
            printf("\nO segundo valor e maior");
    }
    else
    {
        if (segundoValor>terceiroValor)
            printf("\nO segundo valor e maior");
        else
            printf("\nO terceiro valor e maior");
    }
    return 0;
}
