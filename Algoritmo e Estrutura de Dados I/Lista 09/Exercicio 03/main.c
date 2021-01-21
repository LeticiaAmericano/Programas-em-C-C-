#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Apresentacao();
int Numero();
void ParImpar(int digito);

int main()
{
    //Identificar se um inteiro é par ou ímpar.
    Apresentacao();
    int digito = Numero();
    ParImpar(digito);
    return 0;
}

void Apresentacao()
{
    printf("\nIdentificar se o numero e par ou impar");
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
        printf("\nDigite um numero: ");
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
* Dado de saída (valor gerado pela função): digitado
*****************************************************************/

void ParImpar(int digito)
{
    if(digito % 2 == 0)
        printf("\nO numero e par");
    else
        printf("\nO numero e impar");
}

/***************************************************************
* Assinatura da função:ParImpar
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Identifica se o numero e par ou impar
* Dados de entrada (argumentos): digito
* Dado de saída (valor gerado pela função): Vazio
*****************************************************************/
