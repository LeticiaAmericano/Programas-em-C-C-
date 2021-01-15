#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Construa um programa que leia um número indeterminado de números reais. Ao final da leitura, a amplitude dos valores lidos.
    float valor, maior, menor, amplitude;
    int contador = 0, quantidade;
    printf("\nDigite a quantidade de numeros que devera ser lidos:");
    scanf("%i", &quantidade);
    printf("\nDigite o valor:\n");
    scanf("%f", &valor);
    contador++;
    menor = valor;
    if (maior < valor)
        maior = valor;
    while(contador < quantidade)
    {
        printf("\nDigite o valor:\n");
        scanf("%f", &valor);
        contador++;
        if (maior < valor)
            maior = valor;
        if (menor > valor)
            menor = valor;
    }
    printf("\n%f", maior);
    printf("\n%f", menor);
    amplitude = maior - menor;
    printf("\nA amplitude dos valores e:%f", amplitude);
    return 0;
}
