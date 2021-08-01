#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Apresentacao();
int Numero();
void Primo(int digito);

int main()
{
    //Identificar se um n�mero natural � primo ou n�o.
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
* Assinatura da fun��o: Apresentacao
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Identificacao do programa
* Dados de entrada (argumentos): Vazio
* Dado de sa�da (valor gerado pela fun��o): Vazio
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
* Assinatura da fun��o: Numero
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Ler o valor
* Dados de entrada (argumentos): Vazio
* Dado de sa�da (valor gerado pela fun��o): digito
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
* Assinatura da fun��o: Primo
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Definir se o valor e primo ou nao
* Dados de entrada (argumentos): digito
* Dado de sa�da (valor gerado pela fun��o): Vazio
*****************************************************************/
