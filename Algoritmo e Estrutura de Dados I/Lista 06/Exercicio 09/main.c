#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Uma empresa deseja reestruturar sua política de preços.
    //Para atendê-la, construa um programa que leia o preço de um conjunto de n mercadorias, sendo n também um valor lido.
    //O programa deverá calcular e escrever o maior preço dentre as mercadorias abaixo de dois mil reais e o maior preço dentre aquelas a partir de dois mil reais.
    //Rejeitar a leitura de valores inválidos.
    float preco;
    int mercadorias, maiorMaior, menorMaior;
    do
    {
        printf("/nDigite o numero de mercadorias: ");
        scanf("%i", &mercadorias);
    }
    while(mercadorias <= 0);
    for(int i = 0; i < mercadorias; i++)
    {
        do
        {
            printf("\nDigite o preco da mercadoria: ");
            scanf("%f", &preco);
        }
        while(preco <= 0);
        if(preco >= 2000 && maiorMaior == NULL)
            maiorMaior = preco;
        if(preco < 2000 && maiorMaior == NULL)
            menorMaior = preco;
        if(preco < 2000)
        {
            if(preco > menorMaior)
                menorMaior = preco;
        }
        if(preco >= 2000)
        {
            if(preco > maiorMaior)
                maiorMaior = preco;
        }
    }
    printf("\nMaior entre os valores a partir de 2000: %i", maiorMaior);
    printf("\nMaior entre os valores menores que 2000: %i", menorMaior);
    return 0;
}
