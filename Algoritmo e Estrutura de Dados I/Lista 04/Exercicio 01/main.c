#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Construa um programa que leia dez números reais. Aao final da leitura, a amplitude dos valores lidos.
    float valor, maior, menor, amplitude;
    int contador = 1;
    printf("\nDigite o %io valor:\n",contador);
    scanf("%f",&valor);
    contador++;
    menor = valor;
    if (maior < valor)
        maior = valor;
    while(contador < 11)
    {
        printf("\nDigite o %io valor:\n", contador);
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
