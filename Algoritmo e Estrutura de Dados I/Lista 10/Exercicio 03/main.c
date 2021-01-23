#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float Valor();
float ValorMaior(float primeiroValor, float segundoValor);
void Resultado(float maior);

int main()
{
    //Construa uma outra versão do programa mantendo a restrição de as funções retornarem um valor, porém utilizando passagem de parâmetro por referência apenas nos casos que efetivamente se tornam necessários.
    printf("\nIdentificacao do maior entre dois numeros");
    float primeiroValor = Valor();
    float segundoValor = Valor();
    float maior = ValorMaior(primeiroValor, segundoValor);
    Resultado(maior);
    return 0;
}

float Valor()
{
    float valor;
    fflush (stdin);
    bool erro;
    do
    {
        printf("\nDigite o valor desejado: ");
        scanf("%f", &valor);
        erro = valor < 0;
        if(erro)
            printf("\nValor invalido");
    }
    while(erro);
    return valor;
}

/***************************************************************
* Assinatura da função: Valor
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Ler o valor utilizado na função.
* Dados de entrada (argumentos): Vazio
* Dado de saída (valor gerado pela função): valor
*****************************************************************/

float ValorMaior(float primeiroValor, float segundoValor)
{
    float maior = 0;
    if(primeiroValor > maior)
        maior = primeiroValor;
    if(segundoValor > maior)
        maior = segundoValor;
    return maior;
}

/***************************************************************
* Assinatura da função: ValorMaior
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Identificar qual é o maior valor entre os digitados
* Dados de entrada (argumentos): primeiroValor, segundoValor
* Dado de saída (valor gerado pela função): maior
*****************************************************************/

void Resultado(float maior)
{
    printf("\nO maior entre os dois numeros e %f", maior);
}

/***************************************************************
* Assinatura da função: Resultado(float *Maior)
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Demonstrar a solução decidida
* Dados de entrada (argumentos): Vazio
* Dado de saída (valor gerado pela função): Vazio
*****************************************************************/
