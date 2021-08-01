#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Valor(float *primeiroValor);
void valor(float *segundoValor);
void ValorMaior(float *primeiroValor, float *segundoValor, float *maior);
void Resultado(float *maior);

int main()
{
    //Fun��o para ler um valor real e retorn�-lo; Fun��o que recebia dois valores reais e retornava o maior entre eles; Fun��o que recebia um valor real (relativo ao maior valor) e o escrevia na tela.
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
* Assinatura da fun��o: Valor(float *Segundo)
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Ler o valor utilizado na fun��o
* Dados de entrada (argumentos): Vazio
* Dado de sa�da (valor gerado pela fun��o): Vazio
*****************************************************************/

void ValorMaior(float *primeiroValor, float *segundoValor, float *maior)
{
    if(*primeiroValor > *maior)
        *maior = *primeiroValor;
    if(*segundoValor > *maior)
        *maior = *segundoValor;
}

/***************************************************************
* Assinatura da fun��o: ValorMaior (float *Primeiro,float *Segundo,float *Maior)
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Identificar qual � o maior valor entre os digitados
* Dados de entrada (argumentos): Vazio
* Dado de sa�da (valor gerado pela fun��o): Vazio
*****************************************************************/

void Resultado(float *maior)
{
    float resultado = *maior;
    printf("\nO maior entre os dois numeros e %f", resultado);
}

/***************************************************************
* Assinatura da fun��o: Resultado(float *Maior)
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Demonstrar a solu��o decidida
* Dados de entrada (argumentos): Vazio
* Dado de sa�da (valor gerado pela fun��o): Vazio
*****************************************************************/
