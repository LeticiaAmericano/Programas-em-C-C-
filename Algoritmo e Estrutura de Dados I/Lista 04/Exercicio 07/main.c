#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

int main()
{
    //Progressão Aritmética
    do
    {
        printf("\nProgressao Aritmetica");
        char resposta;
        int termos, contador = 0, numero = 0, divisor, pTermos, razao;
        bool erro, errado;
        do
        {
            printf("\nDigite o valor que deseja-se saber se e divisor da P.A.: ");
            scanf("%i", &divisor);
        }
        while(divisor == 0);
        printf("\nDigite o primeiro termo da P.A.:");
        scanf("%i", &pTermos);
        printf("\nDigite a razao que proporciona a continuidade:");
        scanf("%i", &razao);
        do
        {
            printf("\nDigite o numero de termos:");
            scanf("%i", &termos);
            erro = termos < 1;
            if(erro)
            printf("\nNumero do termo invalido\a");
        }
        while(erro);
        printf("\nPA:");
        while (contador != termos)
        {
            printf("%.1i,",pTermos);
            pTermos = pTermos + razao;
            contador = contador + 1;
            if (pTermos % divisor == 0)
            {
                numero++;
            }
        }
        printf("\nO numero de termos divisiveis por x nessa P.A. e %i", numero);
        do
        {
            printf("\nDeseja repetir o calculo [S/N]?");
            fflush(stdin);
            scanf("%c", &resposta);
            resposta = toupper(resposta);
            printf("\n%c", resposta);
            errado = resposta != 'S' && resposta != 'N';
            if (errado)
                 printf("\nResposta invalida");
        }
        while (errado);
    }
    while(resposta == 'S');
    printf("\nFim");
    return 0;
}
