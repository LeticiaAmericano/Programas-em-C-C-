#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Ler um número natural e verificar se é ele primo ou não.
    bool erro;
    int divisor, contador = 0, valor;
    do
    {
        printf("\nDigite um numero natural:");
        scanf("%i", &valor);
        erro = valor <= 0;
        if (erro)
            printf("\nApenas numeros positivos");
    }
    while(erro);
    for (divisor = 1; divisor <= valor; divisor ++)
    {
        if (valor % divisor == 0)
            contador ++;
    }
    if (contador == 2)
        printf("\nO numero e primo.");
    else
        printf("\nO numero n e primo.");
    return 0;
}
