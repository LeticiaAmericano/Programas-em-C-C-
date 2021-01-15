#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Calcular e escreve o valor de H, sendo H igual a: H = 1/1 + 1/3 + 1/9 + 1/27 + ...
    float H, soma, divisor = 1;
    int anterior = 1, contador = 0;
    do
    {
        H = 1 / divisor;
        printf("%f\t", H);
        soma = H + soma;
        divisor = anterior * 3;
        anterior = divisor;
        contador ++;
    }
    while(contador != 10);
    printf("\nO valor de H e:%f", Soma);
    return 0;
}
