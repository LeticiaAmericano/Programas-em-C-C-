#include <stdio.h>
#include <stdlib.h>

int Valor();
void Teste(int *B, int *K, int *N);

int main()
{
    //Escreva uma função que recebe um valor n passado por valor e dois inteiros b e k passados por "referência". Deve retornar em b e k valores tal que bk = n e b seja o menor possível.
    int b = Valor();
    int k = Valor();
    int n;
    Teste(&b, &k, &n);
    printf("\n O valor n e: %i", n);
    return 0;
}

int Valor()
{
    int x;
    printf("\nDigite o digito:");
    scanf("\n%i", &x);
    return x;
}

void Teste(int *b, int *k, int *n)
{
    int tmp;
    if(*b > *k)
    {
        tmp = *b;
        *b = *k;
        *k = tmp;
    }
    *n = *b * *k;
}
