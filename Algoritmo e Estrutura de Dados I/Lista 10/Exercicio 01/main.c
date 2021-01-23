#include <stdio.h>
#include <stdlib.h>

void Troca(int *X, int *Y);

int main()
{
    //Quais valores ser�o escritos na tela ap�s a execu��o.
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
* Assinatura da fun��o: Troca(int *X, int *Y)
* Data da elabora��o: 24/04/2020
* Autor: Let�cia Americano Lucas
* Objetivo: Trocar os valores armazenados em um local espec�fico da mem�ria das vari�veis x e y
* Dados de entrada (argumentos): int *X (A), int *Y (B)
* Dado de sa�da (valor gerado pela fun��o): Vazio
*****************************************************************/
