#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Apresentacao();
int Numero();
void Primo(int digito);

int main()
{
    //Identificar se um número natural é primo ou não.
    Apresentacao();
    int digito = Numero();
    Primo(digito);
    return 0;
}

void Apresentacao()
{
    printf("\nIdentificar o numero e primo ou nao");
}

/***************************************************************
* Assinatura da função: Apresentacao
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Identificacao do programa
* Dados de entrada (argumentos): Vazio
* Dado de saída (valor gerado pela função): Vazio
*****************************************************************/

int Numero()
{
    int digito;
    bool erro;
    do
    {
        printf("\nDigite o numero: ");
        scanf("%i", &digito);
        erro = digito < 0;
        if(erro)
            printf("\nValor invalido");
    }
    while(erro);
    return digito;
}

/***************************************************************
* Assinatura da função: Numero
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Ler o valor
* Dados de entrada (argumentos): Vazio
* Dado de saída (valor gerado pela função): digito
*****************************************************************/

void Primo(int digito)
{
    if(digito % 2 == 0)
        printf("\nNao e primo");
    else
        if (digito % 2 != 0)
            printf("\nE primo");
}

/***************************************************************
* Assinatura da função: Primo
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Definir se o valor e primo ou nao
* Dados de entrada (argumentos): digito
* Dado de saída (valor gerado pela função): Vazio
*****************************************************************/
