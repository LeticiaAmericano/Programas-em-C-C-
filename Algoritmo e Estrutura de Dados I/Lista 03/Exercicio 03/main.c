#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Construa um programa que escreva na tela do monitor de v�deo os n�meros inteiros de dez at� um (ordem decrescente). Utilize estrutura de repeti��o com teste no in�cio.
    int numero = 10;
    while(numero != 0)
    {
        printf("\n%i", numero);
        numero = numero - 1;
    }
    return 0;
}
