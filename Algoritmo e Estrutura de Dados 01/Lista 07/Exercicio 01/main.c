#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Calcular e escrever o valor promocional, com o devido desconto.
    float valor, novoValor, desconto;
    bool flag = 1, erro;
    do
    {
        do
        {
            printf("\nLiquidacao de estoque.");
            printf("\nCaso deseja encerrar o programa digite 0");
            printf("\nDigite o valor do produto que deseja comprar: ");
            scanf("%f", &valor);
            erro = valor < 0;
            if (erro)
                printf("\nApenas valores positivos");
        }
        while (erro);
        if (valor == 0)
            flag = 0;
        else
        {
            if(valor < 500)
            {
                novoValor = valor - 0.7 * valor;
                desconto = 0.7 * valor;
                printf("\nO novo valor do produto e de : %f", novoValor);
                printf("\nO desconto presente no produto e de : %f", desconto);
            }
            else
            {
                if (valor >= 500 && valor <= 3000)
                {
                    novoValor = valor - 0.6 * valor;
                    desconto = 0.6 * valor;
                    printf("\nO novo valor do produto e de : %f", novoValor);
                    printf("\nO desconto presente no produto e de : %f", desconto);
                }
                else
                {
                    novoValor = valor - 0.5 * valor;
                    desconto = 0.5 * valor;
                    printf("\nO novo valor do produto e de : %f", novoValor);
                    printf("\nO desconto presente no produto e de : %f", desconto);
                }
            }
        }
    }
    while(flag == 1);
    printf("\nFim do programa");
    return 0;
}
