#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Uma empresa deseja reestruturar sua pol�tica de pre�os.
    //Para atend�-la, construa um programa que leia o pre�o de um conjunto de n mercadorias, sendo n tamb�m um valor lido.
    //O programa dever� calcular e escrever o maior pre�o dentre as mercadorias abaixo de dois mil reais e o maior pre�o dentre aquelas a partir de dois mil reais.
    //Rejeitar a leitura de valores inv�lidos.
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
