#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float Valor();
float ValorMaior(float primeiroValor, float segundoValor);
void Resultado(float maior);

int main()
{
    //Construa uma outra vers�o do programa mantendo a restri��o de as fun��es retornarem um valor, por�m utilizando passagem de par�metro por refer�ncia apenas nos casos que efetivamente se tornam necess�rios.
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
* Assinatura da fun��o: Valor
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Ler o valor utilizado na fun��o.
* Dados de entrada (argumentos): Vazio
* Dado de sa�da (valor gerado pela fun��o): valor
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
* Assinatura da fun��o: ValorMaior
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Identificar qual � o maior valor entre os digitados
* Dados de entrada (argumentos): primeiroValor, segundoValor
* Dado de sa�da (valor gerado pela fun��o): maior
*****************************************************************/

void Resultado(float maior)
{
    printf("\nO maior entre os dois numeros e %f", maior);
}

/***************************************************************
* Assinatura da fun��o: Resultado(float *Maior)
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Demonstrar a solu��o decidida
* Dados de entrada (argumentos): Vazio
* Dado de sa�da (valor gerado pela fun��o): Vazio
*****************************************************************/
