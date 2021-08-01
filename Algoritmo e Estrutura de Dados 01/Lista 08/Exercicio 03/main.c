#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void Apresentacao();
float Altura();
char Genero();
float PesoIdeal(float altura, float genero);
void Resposta(float resultado);

int main()
{
    //Construa um programa que permita calcular o peso ideal de uma pessoa.
    Apresentacao();
    float altura = Altura();
    char genero = Genero();
    float resultado = PesoIdeal(altura, genero);
    Resposta(resultado);
    return 0;
}

void Apresentacao()
{
    printf("Programa que calcula o peso ideal");
}

float Altura()
{
    float altura;
    do
    {
        printf("\nDigite a altura do individuo: ");
        scanf("%f", &altura);
    }
    while (altura < 0);
    return altura;
}

char Genero()
{
    char genero;
    do
    {
        printf("\nGenero masculino: M");
        printf("\nGenero feminino: F");
        printf("\nDigite o valor do genero:");
        fflush(stdin);
        scanf("%c", &genero);
        genero = toupper(genero);
    }
    while (genero != 'F' && genero != 'M');
    return genero;
}

float PesoIdeal(float altura, float genero)
{
    float resultado;
    if (genero == 'M')
        resultado = (72.7 * altura) - 58;
    else
        resultado = (62.1 * altura) - 44.7;
    return resultado;
}
void Resposta(float resultado)
{
    printf("\nO peso ideal e: %f", resultado);
}
