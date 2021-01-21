#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Apresentacao();
int Numero();
void Fatorial(int digito);

int main()
{
    //Calcular o fatorial de um número natural.
    Apresentacao();
    int digito = Numero();
    Fatorial(digito);
    return 0;
}

void Apresentacao()
{
    printf("\nCalculo do fatorial");
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

void Fatorial(int digito)
{
    for(digito; digito != 1; digito = digito - 1)
    {
        printf("%ix", digito);
    }
    printf("1");
}

/***************************************************************
* Assinatura da função: Fatorial
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Calcular o fatorial
* Dados de entrada (argumentos): digito
* Dado de saída (valor gerado pela função): Vazio
*****************************************************************/
