#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Construir um programa que escreva na tela do monitor de v�deo os n�meros inteiros de dez at� um (ordem decrescente). Utilize estrutura de repeti��o com teste no final.

    int numero = 10;
    do
    {
        printf("\n%i", numero);
        numero = numero - 1;
    }
    while(numero != 0);
    return 0;
}
