#include <stdio.h>
#include <stdlib.h>

void Apresentacao();
void Resultado(float soma);
float Variavel();
float SomadosNumeros(float primeiroValor, float segundoValor);

int main()
{
    Apresentacao();
    float primeiroValor = Variavel();
    float segundoValor = Variavel();
    float soma = SomadosNumeros(primeiroValor, segundoValor);
    Resultado(soma);
    return 0;
}

void Apresentacao()
{
    printf("\nSoma de dois numeros");
}

float Variavel()
{
    float valor;
    printf("\nDigite um numero: ");
    scanf("%f", &valor);
    return valor;
}

float SomadosNumeros(float primeiroValor, float segundoValor)
{
    float soma = primeiroValor + segundoValor;
    return soma;
}

void Resultado(float soma)
{
    printf("\nA soma e %f", soma);
}
