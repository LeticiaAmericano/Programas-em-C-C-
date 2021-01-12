#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    //Crie uma nova versão para a calculadora. Nela, acrescente ao programa a possibilidade de serem realizados vários cálculos.
    float  primeiroValor, segundoValor, resultado;
    char opcao;
    do
    {
        printf("\nMenu:");
        printf("\n+");
        printf("\n-");
        printf("\n*");
        printf("\n/");
        printf("Sair: S");
        printf("\nDigite a opcao que deseja utilizar:");
        fflush(stdin);
        scanf("%c", &opcao);
        opcao = toupper(opcao);
        if(opcao != 'S')
        {
            printf("\nEscreva o primeiro valor:");
            scanf("%f",&primeiroValor);
            printf("\nEscreva o segundo valor:");
            scanf("%f",&segundoValor);
        }
        switch(opcao)
        {
            case 'S': printf("\nObrigado por usar este programa.");
            break;
            case '+':
            {
                resultado = primeiroValor + segundoValor;
                printf("\nO resultado = %.2f", resultado);
            }
            break;
            case '-':
            {
                resultado = primeiroValor - segundoValor;
                printf("\nO resultado = %.2f", resultado);
            }
            break;
            case '*':
            {
                resultado = primeiroValor * segundoValor;
                printf("\nO resultado = %.2f", resultado);
            }
            break;
            case '/':
            {
                resultado = primeiroValor / segundoValor;
                printf("\nO resultado = %.2f", resultado);
            }
            break;
            default:
            {
                printf("Opcao Invalida");
            }
            break;
        }
    }
    while(opcao != 'S');
    return 0;
}

