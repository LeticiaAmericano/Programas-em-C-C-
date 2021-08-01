#include <stdio.h>
#include <stdlib.h>

int main()
{
    float H, soma, divisor = 1;
    int anterior = 1, contador = 0, termos;
    printf("Digite o numero de termos que deseja ser lido:");
    scanf("%i", &termos);
    do
    {
        H = 1 / divisor;
        printf("%f\t", H);
        soma = H + soma;
        divisor = anterior * 3;
        anterior = divisor;
        contador ++;
    }
    while(contador != termos);
    printf("\nO valor de H e:%f", soma);
    return 0;
}
