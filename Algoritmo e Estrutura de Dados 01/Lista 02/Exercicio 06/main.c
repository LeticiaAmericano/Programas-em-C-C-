#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Verificar e escrever se está o aluno aprovado, em reavaliação ou reprovado.
    float primeiroValor, segundoValor, soma;
    bool  aprovado, reavaliacao, reprovado;
    do
    {
        printf("Digite a primeira nota:");
        scanf("%f", &primeiroValor);
        printf("\nDigite a segunda nota:");
        scanf("%f", &segundoValor);
    }
    while(primeiroValor < 0 || primeiroValor > 50 || segundoValor < 0 ||segundoValor > 50);
    soma = primeiroValor + primeiroValor;
    aprovado = (soma >= 70);
    reavaliacao = (soma < 70 || soma >= 40);
    reprovado = (soma < 40);
    if(aprovado)
        printf("\nAprovado");
    else
    {
        if(reavaliacao)
            printf("\nEm reavaliacao");
        else
            printf("\nReprovado");
    }
    return 0;
}
