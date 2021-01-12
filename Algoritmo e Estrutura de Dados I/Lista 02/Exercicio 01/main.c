#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ler os três valores: A, B, C.
    float primeiroValor, segundoValor, terceiroValor;
    printf("Digite o valor de A:");
    scanf("%f", &primeiroValor);
    printf("\nDigite o valor de B:");
    scanf("%f", &segundoValor);
    printf("\nDigite o valor de C:");
    scanf("%f", &terceiroValor);
    //Escrever uma mensagem informando se a soma de A + B é menor que C.
    if(primeiroValor + segundoValor < terceiroValor)
    {
         printf("\nA soma de A + B e menor que C");
    }
    else
    {
         printf("\nA soma de A + B nao e menor que C");
    }
    return 0;
}
