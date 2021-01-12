#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Construa um programa que escreva na tela do monitor de vídeo os números inteiros de dez até um (ordem decrescente). Utilize estrutura de repetição com teste no início.
    int numero = 10;
    while(numero != 0)
    {
        printf("\n%i", numero);
        numero = numero - 1;
    }
    return 0;
}
