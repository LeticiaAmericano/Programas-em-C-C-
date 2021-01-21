#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Apresentacao();
int Numero();
void Fatorial(int digito);

int main()
{
    //Calcular o fatorial de um n�mero natural.
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

void Fatorial(int digito)
{
    for(digito; digito != 1; digito = digito - 1)
    {
        printf("%ix", digito);
    }
    printf("1");
}

/***************************************************************
* Assinatura da fun��o: Fatorial
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Calcular o fatorial
* Dados de entrada (argumentos): digito
* Dado de sa�da (valor gerado pela fun��o): Vazio
*****************************************************************/
