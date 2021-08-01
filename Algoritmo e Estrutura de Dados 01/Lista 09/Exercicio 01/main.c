#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Apresentacao();
void Resultado(float maior);
float Valor();
float ValorMaior(float primeiroValor, float segundoValor);

int main()
{
    //Calcular o maior entre dois valores reais.
    Apresentacao();
    float primeiroValor = Valor();
    float segundoValor = Valor();
    float maior = ValorMaior(primeiroValor, segundoValor);
    Resultado(maior);
    return 0;
}

void Apresentacao()
{
    printf("\nIdentificacao do maior entre dois numeros");
}

/***************************************************************
* Assinatura da função: Apresentacao
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Identificacao do programa
* Dados de entrada (argumentos): Vazio
* Dado de saída (valor gerado pela função): Vazio
*****************************************************************/

float Valor()
{
    float valor;
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
    fflush (stdin);
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
    float maior;
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
* Assinatura da função: Resultado
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Demonstrar a solução decidida
* Dados de entrada (argumentos): maior
* Dado de saída (valor gerado pela função): Vazio
*****************************************************************/
