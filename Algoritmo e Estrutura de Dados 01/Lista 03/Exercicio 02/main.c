#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Construir um programa que escreva na tela do monitor de vídeo os números inteiros de dez até um (ordem decrescente). Utilize estrutura de repetição com teste no final.

    int numero = 10;
    do
    {
        printf("\n%i", numero);
        numero = numero - 1;
    }
    while(numero != 0);
    return 0;
}
