#include <stdio.h>
#include <stdlib.h>

float Valor();
void Organizacao(float *primeiroValor, float *segundoValor, float *terceiroValor);
void Resultado(float *segundoValor);
void Transicao(float *primeiroValor, float *segundoValor);

int main()
{
    //Calcular e escrever o segundo maior valor.
    printf("\nCalculo do segundo maior valor\n");
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
        {
            float tmp;
            tmp = *primeiroValor;
            *primeiroValor = *segundoValor;
            *segundoValor = tmp;
        }
        if(*segundoValor > *terceiroValor)
        {
            float tmp;
            tmp = *segundoValor;
            *segundoValor = *terceiroValor;
            *terceiroValor = tmp;
        }
    }
    while(!(*primeiroValor < *segundoValor && *segundoValor < *terceiroValor));
}

void Resultado(float *segundoValor)
{
    printf("\nO Segundo maior valor e o %f", *segundoValor);
}
