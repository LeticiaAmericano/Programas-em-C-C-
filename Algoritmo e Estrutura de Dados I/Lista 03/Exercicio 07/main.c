#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Escrever na tela os n primeiros termos de uma Progressão Aritmética.
    printf("\nProgressao Aritmetica");
    float razao, Ao, Ai;
    int termos;
    int contador = 0;
    bool erro;
    printf("\nDigite o primeiro termo da P.A.:");
    scanf("%f",&Ao);
    printf("\nDigite a razao que proporciona a continuidade:");
    scanf("%f",&razao);
    do
    {
        printf("\nDigite o numero de termos:");
        scanf("%i",&termos);
        if(erro < 1)
            printf("\nNumero do termo invalido\a");
    }
    while(erro);
    printf("\nPA:");
    while (contador < termos)
    {
        Ai = Ao + razao*contador;
        printf("%.1f,",Ai);
        contador = contador + 1;
    }
    return 0;
}
