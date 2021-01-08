#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Identificar o maior valor entre dois números lidos
    int primeiro;
    int segundo;
    printf("Digite o primeiro valor:");
    scanf("%i",&primeiro);
    printf("\nDigite o segundo valor:");
    scanf("%i",&segundo);
    if(primeiro>segundo)
        printf("\nO maior valor entre os digitos e : %i", primeiro);
    else
    {
        if(primeiro<segundo)
            printf("\nO maior valor entre os digitos e : %i", segundo);
        else
            printf("\nOs valores digitados sao iguais");
    }
    return 0;
}
