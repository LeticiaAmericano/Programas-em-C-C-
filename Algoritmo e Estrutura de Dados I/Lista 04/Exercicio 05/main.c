#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Calcular e escrever os n primeiros termos da sequência abaixo, sendo n um valor lido: 1/100,   97/2,   3/94,   91/4,   5/88,   ...
    printf("Calcular e escrever os primeiros termos de uma sequencia .\n");
    float dividendo=1, divisor = 100, soma = 0, anterior, X;
    int contador, marcardo = 1;
    bool erro;
    do
    {
        printf("\nDigite o numero de termos que deseja: ");
        scanf("%i", &contador);
        erro = contador <= 0;
        if (erro)
        {
            printf("\n\aApenas numeros positivos não nulos");
        }
    }
    while(erro);
    while(contador != 0)
    {
        if(marcardo % 2 != 0)
        {
            X = dividendo / divisor;
            contador --;
            divisor -= 3;
            dividendo ++;
            printf("\n%f",X);
            marcardo ++;
        }
        else
        {
            X = divisor / dividendo;
            contador --;
            divisor -=3 ;
            dividendo ++;
            printf("\n%f",X);
            marcardo ++;
        }
        soma = X + anterior + soma;
        X = anterior;
    }
    printf("\nO valor da soma e:%f", soma);
    return 0;
}
