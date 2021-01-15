#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Calcular e escrever os dez primeiros termos da sequência abaixo: 10/100, 99/11, 12/98, 97/13, 14/96, ...
    float dividendo = 10, divisor = 100, soma = 0, anterior, X;
    int contador = 10, marcador = 1;
    while(contador != 0)
    {
        if(marcador % 2 != 0)
        {
            X = dividendo / divisor;
            contador --;
            divisor --;
            dividendo ++;
            printf("\n%f", X);
            marcador ++;
        }
        else
        {
            X = divisor / dividendo;
            contador --;
            divisor --;
            dividendo ++;
            printf("\n%f", X);
            marcador ++;
        }
        soma = X + anterior + soma;
        X = anterior;
    }
    printf("\nO valor da soma e: %f", soma);
    return 0;
}
