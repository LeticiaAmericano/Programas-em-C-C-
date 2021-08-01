#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Calcule e escreva os n primeiros termos Fibonacci, sendo n um valor lido.
    int termos, X = 1, Y = 1, contador = 2, marcador = 1;
    do
    {
        printf("\nDigite o numero de termos que deseja saber da sequencia Fibonacci: ");
        scanf("%i", &termos);
    }
    while(termos <= 0);
    printf("\n%i", X);
    printf("\t%i", Y);
    do
    {
        if(marcador % 2 != 0)
        {
            Y = X + Y;
            printf("\t%i", Y);
            marcador ++;
            contador ++;
        }
        else
        {
            X = X + Y;
            printf("\t%i", X);
            marcador ++;
            contador ++;
        }
    }
    while (contador != termos);
    return 0;
}
