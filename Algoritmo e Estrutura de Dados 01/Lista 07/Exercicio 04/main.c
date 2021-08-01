#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    //Construa um programa que leia um conjunto de n valores inteiros e positivos, sendo n também um valor lido.
    bool erro;
    int valor, numero, contador = 1, impar = 0, par = 0;
    char resposta;
    do
    {
        contador = 1;
        impar = 0;
        par = 0;
        do
        {
            printf("\nDigite o numero de valores que deseja ser lido:");
            scanf("%i", &valor);
            erro = valor < 0;
            if (erro)
                printf("\nValor invalido");
        }
        while (erro);
        while (contador != valor + 1)
        {
            do
            {
                printf("\nDigite o %i valor desejado:", contador);
                scanf("%i", &numero);
                erro = numero <= 0;
                if (erro)
                    printf("\nNumero invalido");
            }
            while (erro);
            contador ++;
            if (numero % 2 == 0)
            {
                printf("\nEsse numero e par.");
                if (par < numero)
                    par = numero;
            }
            else
            {
                if (numero % 2 != 0)
                {
                    printf("\nEsse numero e impar.");
                    if (impar < numero)
                        impar = numero;
                }
            }
        }
        printf("\nO maior numero impar:%i", impar);
        printf("\nO maior numero par:%i", par);
        do
        {
            printf("\nDeseja continuar [S/N]?");
            fflush(stdin);
            scanf("%c", &resposta);
            resposta = toupper(resposta);
            erro = resposta != 'S' && resposta != 'N';
            if (erro)
                printf("\nResposta invalida");
        }
        while (erro);
    }
    while(resposta == 'S');
    return 0;
}
