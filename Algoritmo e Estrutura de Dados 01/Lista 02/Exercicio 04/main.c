#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    do
    {
        printf("1: Domingo");
        printf("\n2: Segunda");
        printf("\n3: Terca");
        printf("\n4: Quarta");
        printf("\n5: Quinta");
        printf("\n6: Sexta");
        printf("\n7: Sabado");
        //Ler um valor inteiro entre 1 (domingo) e 7 (sábado).
        printf("\nDigite o digito da semana:");
        scanf("%i",&dia);
    }
    while(dia>7 || dia<1);
    //Escrever o dia da semana correspondente
    switch(dia)
    {
        case 1: printf("\nDomingo");
        break;
        case 2: printf("\nSegunda");
        break;
        case 3: printf("\nTerça");
        break;
        case 4: printf("\nQuarta");
        break;
        case 5: printf("\nQuinta");
        break;
        case 6: printf("\nSexta");
        break;
        case 7: printf("\nSabado");
        break;
    }
    return 0;
}
