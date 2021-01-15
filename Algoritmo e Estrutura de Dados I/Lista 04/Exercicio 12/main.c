#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Construa um programa que leia uma sequência de dez números naturais. O programa deverá informar a média e o maior valor entre eles.
    float valor, maior = 0, menor = 0, soma = 0, media;
    int contador = 1;
    printf("\nDigite o %io valor:", contador);
    scanf("%f", &valor);
    contador ++;
    menor = valor;
    maior = valor;
    while(contador < 11)
    {
        contador ++;
        valor ++;
        printf("%f\t", valor);
        soma = soma + valor;
        if (maior < valor)
            maior = valor;
        if (menor > valor)
            menor = valor;
    }
    printf("\nO maior valor e:%f", maior);
    media = soma / 10;
    printf("\nA  media dos valores e:%f", media);
    return 0;
}
