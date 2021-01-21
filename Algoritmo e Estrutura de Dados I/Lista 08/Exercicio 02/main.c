#include <stdio.h>
#include <stdlib.h>

void Apresentacao();
void Resultado(float area);
float Variavel();
float Multiplicacao(float base, float altura);

int main()
{
    //Construa um programa que calcule a área de um retângulo.
    Apresentacao();
    float base = Variavel();
    float altura = Variavel();
    float area = Multiplicacao(base, altura);
    Resultado(area);
    return 0;
}

void Apresentacao()
{
    printf("\nSoma de dois numeros");
}

float Variavel()
{
    bool erro;
    do
    {
        float valor;
        printf("\nDigite um numero: ");
        scanf("%f", &valor);
        return valor;
        erro = valor < 0;
        if (erro)
            printf("Apenas numeros positivos")
    }
    while (erro)
}

float Multiplicacao(float base, float altura)
{
    float area = base * altura;
    return area;
}

void Resultado(float area)
{
    printf("O resultado e igual a %f", area);
}
