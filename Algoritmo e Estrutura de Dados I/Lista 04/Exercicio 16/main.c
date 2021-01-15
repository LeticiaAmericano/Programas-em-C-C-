#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Construa um programa que leia o preço de um conjunto de n mercadorias, sendo n também um valor lido. O programa deverá calcular e escrever o maior preço dentre as mercadorias abaixo de dois mil reais e o maior preço dentre aquelas a partir de dois mil reais.
    int mercadorias, contador = 0;
    float preco, maior = 2000, mMaior, menor=0;
    printf("\nDigite o numero de mercadorias: ");
    scanf("%i", &mercadorias);
    do
    {
        do
        {
            printf("\nDigite o preco das mercadoria: ");
            scanf("%f", &preco);
            if (preco <= 0)
                printf("\nApenas valores positivos nao nulos");
        }
        while(preco <=0);
        contador ++;
        if (preco >= maior)
        {
            if (preco > mMaior)
                mMaior = preco;
        }
        else
        {
            if (preco > menor)
                menor = preco;
        }
    }
    while(contador != mercadorias);
    printf("\nO maior preco das mercadorias a partir de 2000 e: %f", mMaior);
    if (menor < 2000)
        printf("\nO maior preco das mercadorias abaixo de 2000 e: %f", menor);
    return 0;
}
