#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Construir um programa que calcule e escreva o fatorial de um n�mero inteiro e positivo, sendo este n�mero um valor lido.
    int fatorial;
    do
    {
        printf("\nDigite o valor do fatorial que deseja:");
        scanf("%i", &fatorial);
        if (fatorial == 0)
            printf("\n0! = 1");
    }
    while(fatorial < 0);
    if (fatorial != 0)
    {
        printf("\n%i! = ",fatorial);
        printf("%i", fatorial);
        fatorial = fatorial - 1;
        do
        {
            printf("x%i", fatorial);
            fatorial = fatorial - 1;
        }
        while(fatorial != 0);
    }
    return 0;
}
