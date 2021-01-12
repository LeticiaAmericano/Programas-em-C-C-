#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ler três valores inteiros.
    int primeiroValor, segundoValor, terceiroValor;
    printf("Digite o primeiro valor:");
    scanf("%i",&primeiroValor);
    printf("\nDigite o segundo valor:");
    scanf("%i",&segundoValor);
    printf("\nDigite o terceiro valor:");
    scanf("%i",&terceiroValor);
    //Escrevê-los em ordem decrescente.
    if (primeiroValor > segundoValor && segundoValor > terceiroValor)
        printf("\nPrimeiro Valor > Segundo Valor > Terceiro Valor");
    else
    {
        if (primeiroValor > terceiroValor && terceiroValor > segundoValor)
            printf("\nPrimeiro Valor > Terceiro Valor > Segundo Valor");
        else
        {
            if (segundoValor > primeiroValor && primeiroValor > terceiroValor)
                printf("\nSegundo Valor > Primeiro Valor > Terceiro Valor");
            else
            {
                if (segundoValor > terceiroValor && terceiroValor > primeiroValor)
                    printf("\nSegundo Valor > Terceiro Valor > Primeiro Valor");
                else
                {
                    if (terceiroValor > primeiroValor && primeiroValor > segundoValor)
                        printf("\nTerceiro Valor > Primeiro Valor > Segundo Valor");
                    else
                    {
                        if (terceiroValor > segundoValor && segundoValor > primeiroValor)
                            printf("\nTerceiro Valor > Segundo Valor > Primeiro Valor");
                        else
                            printf("\nImpossivel");
                    }
                }
            }
        }
    }
    return 0;
}
