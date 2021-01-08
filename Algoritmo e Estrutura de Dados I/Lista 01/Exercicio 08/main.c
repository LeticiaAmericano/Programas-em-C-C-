#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Calculo do segundo maior valor entre três números lidos.
    float primeiroValor, segundoValor, terceiroValor;
    printf("Digite o primeiro valor:");
    scanf("%f", &primeiroValor);
    printf("\nDigite o segundo valor:");
    scanf("%f", &segundoValor);
    printf("\nDigite o terceiro valor:");
    scanf("%f", &terceiroValor);
    if (primeiroValor > segundoValor)
    {
        if (primeiroValor < terceiroValor)
            printf("\nO primeiro digito e o segundo maior valor");
        else
        {
            if (segundoValor > terceiroValor)
                printf("\nO segundo digito e o segundo maior valor");
            else
                printf("\nO terceiro digito e o segundo maior valor");
        }

    }
    else
    {
        if (segundoValor < terceiroValor)
            printf("\nO segundo digito e o segundo maior valor");
        else
            printf("\nO terceiro digito e o segundo maior valor");
    }
    return 0;
}
