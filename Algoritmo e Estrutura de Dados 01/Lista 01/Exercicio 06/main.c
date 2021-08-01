#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Calculadora com as quatro operações aritméticas básicas.
    float solucao, primeiroValor, segundoValor, resposta;
    printf("Calculadora");
    printf("\n1: +");
    printf("\n2: -");
    printf("\n3: *");
    printf("\n4: /");
    printf("\nDigite o numero da operacao que deseja utilizar:");
    scanf("%f", &resposta);
    printf("\nDigite o primeiro valor:");
    scanf("%f", &primeiroValor);
    printf("\nDigite o segundo valor:");
    scanf("%f",&segundoValor);
    if (resposta == 1)
    {
        solucao = primeiroValor + segundoValor,
        printf("\n%f", solucao);
    }
     else
    {
        if (resposta == 2)
        {
            solucao = primeiroValor - segundoValor;
            printf("\n%f",solucao);
        }
        else
        {
            if (resposta == 3)
            {
                solucao = primeiroValor * segundoValor,
                printf("\n%f",solucao);
            }
            else
            {
                if (resposta == 4)
                {
                    solucao = primeiroValor / segundoValor,
                    printf("\n%f",solucao);
                }
                else
                    printf("Impossivel");
            }
        }
    }
}

