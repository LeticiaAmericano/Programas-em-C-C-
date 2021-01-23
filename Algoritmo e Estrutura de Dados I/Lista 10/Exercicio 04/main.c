#include <stdio.h>
#include <stdlib.h>

float Valor();
void Organizacao(float *primeiroValor, float *segundoValor, float *terceiroValor);
void Resultado(float *segundoValor);
void Transicao(float *primeiroValor, float *segundoValor);

int main()
{
    //Calcular e escrever o segundo maior valor.
    printf("\nCalculo do segundo maior valor");
    float primeiroValor = Valor();
    float segundoValor = Valor();
    float terceiroValor = Valor();
    Organizacao(&primeiroValor, &segundoValor , &terceiroValor);
    Resultado(&segundoValor);
    return 0;
}

float Valor()
{
    float valor;
    fflush (stdin);
    printf("\nDigite o valor desejado: ");
    scanf("%f", &valor);
    return valor;
}

void Organizacao(float *primeiroValor, float *segundoValor, float *terceiroValor)
{
    do
    {
        if(*primeiroValor > *segundoValor)
            Transicao(&primeiroValor, &segundoValor);
        if(*segundoValor > *terceiroValor)
            Transicao(&segundoValor, &terceiroValor);
    }
    while(!(primeiroValor < segundoValor && segundoValor < terceiroValor));
}

void Transicao(float *primeiroValor, float *segundoValor)
{
    float tmp;
    tmp = *primeiroValor;
    *primeiroValor = *segundoValor;
    *segundoValor = tmp;
}

void Resultado(float *segundoValor)
{
    printf("\nO Segundo maior valor e o %f", *segundoValor);
}
