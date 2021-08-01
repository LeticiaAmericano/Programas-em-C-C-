#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Apresentacao();
int Numero();
void ParImpar(int digito);

int main()
{
    //Identificar se um inteiro � par ou �mpar.
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
* Assinatura da fun��o: Numero
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Ler o valor
* Dados de entrada (argumentos): Vazio
* Dado de sa�da (valor gerado pela fun��o): digitado
*****************************************************************/

void ParImpar(int digito)
{
    if(digito % 2 == 0)
        printf("\nO numero e par");
    else
        printf("\nO numero e impar");
}

/***************************************************************
* Assinatura da fun��o:ParImpar
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Identifica se o numero e par ou impar
* Dados de entrada (argumentos): digito
* Dado de sa�da (valor gerado pela fun��o): Vazio
*****************************************************************/
