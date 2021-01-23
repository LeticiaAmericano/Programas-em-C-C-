#include <stdio.h>
#include <stdlib.h>

void Troca(int *X, int *Y);

int main()
{
    //Quais valores serão escritos na tela após a execução.
    int A = 5, B = 2;
    printf("\nA = %i,B = %i", A, B);
    printf("\nA variavel A esta na posicao %p da memoria", &A);
    printf("\nA variavel B esta na posicao %p da memoria", &B);
    Troca(&A, &B);
    printf("\nA = %i, B = %i", A, B);
    return 0;
}

void Troca(int *X, int *Y)
{
    int Aux;
    Aux = *X;
    *X = *Y;
    *Y = Aux;
}

/***************************************************************
* Assinatura da função: Troca(int *X, int *Y)
* Data da elaboração: 24/04/2020
* Autor: Letícia Americano Lucas
* Objetivo: Trocar os valores armazenados em um local específico da memória das variáveis x e y
* Dados de entrada (argumentos): int *X (A), int *Y (B)
* Dado de saída (valor gerado pela função): Vazio
*****************************************************************/
