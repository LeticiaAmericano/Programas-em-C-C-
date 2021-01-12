#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    //Construa uma nova versão para o programa que identifica se é um ano lido bissexto ou não.
    int ano;
    char resposta;
    do
    {
        printf("\nDeseja descobrir se o ano e bissexto[S/N]?");
        scanf("%c", &resposta);
        resposta = toupper(resposta);
        switch(resposta)
        {
            case 'S':
            {
                printf("\nEscreva o ano:");
                scanf("%i", &ano);
                if(ano % 4 == 0)
                    printf("\nAno Bissexto!");
                else
                {
                    if (ano % 400 == 0 && !(ano % 100 == 0))
                        printf("\nAno bissexto!");
                    else
                        printf("\nNao e bissexto!");
                }
            }
            break;
            case 'N': printf("\nObrigado por usar este programa.");
            break;
            default:
            {
                printf("\nResposta Invalida");
                printf("\n%c",resposta);
            }
            break;
        }
        fflush(stdin);
    }
    while(resposta!='N');
    return 0;
}
