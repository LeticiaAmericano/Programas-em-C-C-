#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Valor(float *primeiroValor);
void valor(float *segundoValor);
void ValorMaior(float *primeiroValor, float *segundoValor, float *maior);
void Resultado(float *maior);

int main()
{
    //Função para ler um valor real e retorná-lo; Função que recebia dois valores reais e retornava o maior entre eles; Função que recebia um valor real (relativo ao maior valor) e o escrevia na tela.
    printf("\nIdentificacao do maior entre dois numeros");
    float primeiroValor = 0;
    float segundoValor = 0;
    float maior = 0;
    Valor(&primeiroValor);
    Valor(&segundoValor);
    ValorMaior(&primeiroValor, &segundoValor, &maior);
    Resultado(&maior);
    return 0;
}

void Valor(float *valor)
{
    bool erro;
    do
    {
        printf("\nDigite o valor desejado: ");
        scanf("%f", &*valor);
        erro = *valor < 0;
        if(erro)
            printf("\nValor invalido");
    }
    while(erro);
    fflush (stdin);
}

/***************************************************************
* Assinatura da função: Valor(float *Segundo)
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Ler o valor utilizado na função
* Dados de entrada (argumentos): Vazio
* Dado de saída (valor gerado pela função): Vazio
*****************************************************************/

void ValorMaior(float *primeiroValor, float *segundoValor, float *maior)
{
    if(*primeiroValor > *maior)
        *maior = *primeiroValor;
    if(*segundoValor > *maior)
        *maior = *segundoValor;
}

/***************************************************************
* Assinatura da função: ValorMaior (float *Primeiro,float *Segundo,float *Maior)
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Identificar qual é o maior valor entre os digitados
* Dados de entrada (argumentos): Vazio
* Dado de saída (valor gerado pela função): Vazio
*****************************************************************/

void Resultado(float *maior)
{
    float resultado = *maior;
    printf("\nO maior entre os dois numeros e %f", resultado);
}

/***************************************************************
* Assinatura da função: Resultado(float *Maior)
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Demonstrar a solução decidida
* Dados de entrada (argumentos): Vazio
* Dado de saída (valor gerado pela função): Vazio
*****************************************************************/
