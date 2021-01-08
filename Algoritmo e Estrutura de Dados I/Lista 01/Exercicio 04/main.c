#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Identificar se um ano lido é bissexto ou não.
    int ano;
    printf("\nEscreva o ano:");
    scanf("%i", &ano);
    if(ano % 4 == 0)
        printf("Ano Bissexto!");
    else
    {
        if (ano % 400 == 0 && !(ano % 100 == 0))
            printf("Ano Bissexto!");
        else
            printf("Nao e bissexto!");
    }
    return 0;
}
