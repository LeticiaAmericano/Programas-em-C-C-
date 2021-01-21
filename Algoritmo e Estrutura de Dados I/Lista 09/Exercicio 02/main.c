#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Apresentacao();
void Resultado(float perimetro);
float LadoQuadrado();
float PerimetroQuadrado(float lado);

int main()
{
    //Calcular o perímetro de um quadrado.
    Apresentacao();
    float lado = LadoQuadrado();
    float perimetro = PerimetroQuadrado(lado);
    Resultado(perimetro);
    return 0;
}

void Apresentacao()
{
    printf("\nCalculo do perimetro de um quadrado");
}

/***************************************************************
* Assinatura da função: Apresentacao
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Identificacao do programa
* Dados de entrada (argumentos): Vazio
* Dado de saída (valor gerado pela função): Vazio
*****************************************************************/

float LadoQuadrado()
{
    float lado;
    bool erro;
    do
    {
        printf("\nDigite o lado do quadrado: ");
        scanf("%f", &lado);
        erro = lado < 0;
        if(erro)
            printf("\nValor invalido");
    }
    while(erro);
    return lado;
}

/***************************************************************
* Assinatura da função: LadoQuadrado
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Ler o valor do lado
* Dados de entrada (argumentos): Vazio
* Dado de saída (valor gerado pela função): lado
*****************************************************************/

float PerimetroQuadrado(float lado)
{
    float perimetro;
    perimetro = 4 * lado;
    return perimetro;
}

/***************************************************************
* Assinatura da função:PeriemtroQuadrado
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Calcular o perimetro
* Dados de entrada (argumentos): lado
* Dado de saída (valor gerado pela função): perimetro
*****************************************************************/

void Resultado(float perimetro)
{
    printf("\nO perimetro do quadrado e %f", perimetro);
}

/***************************************************************
* Assinatura da função: Resultado
* Data da elaboração: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Solucao do programa
* Dados de entrada (argumentos): perimetro
* Dado de saída (valor gerado pela função): Vazio
*****************************************************************/
