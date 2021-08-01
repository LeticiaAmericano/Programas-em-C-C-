#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes;
    do
    {
        printf("1: Janeiro");
        printf("\n2: Fevereiro");
        printf("\n3: Marco");
        printf("\n4: Abril");
        printf("\n5: Maio");
        printf("\n6: Junho");
        printf("\n7: Julho");
        printf("\n8: Agosto");
        printf("\n9: Setembro");
        printf("\n0: Outubro");
        printf("\n11: Novembro");
        printf("\n12: Dezembro");
        //Ler um valor inteiro entre 1 (janeiro) e 12 (dezembro).
        printf("\nDigite o digito do mes:");
        scanf("%i",&mes);
    }
    while(mes>12 || mes<1);
    //Escrever o número de dias que o mês lido possui.
    switch(mes)
    {
        case 1:printf("\nJaneiro: 31 dias");
        break;
        case 2:printf("\nFevereiro: 28 dias");
        break;
        case 3:printf("\nMarco: 31 dias");
        break;
        case 4:printf("\nAbril: 30 dias");
        break;
        case 5:printf("\nMaio: 31 dias");
        break;
        case 6:printf("\nJunho: 30 dias");
        break;
        case 7:printf("\nJulho: 31 dias");
        break;
        case 8:printf("\nAgosto: 31dias");
        break;
        case 9:printf("\nSetembro: 30 dias");
        break;
        case 10:printf("\nOutubro: 31 dias");
        break;
        case 11:printf("\nNovembro: 30 dias");
        break;
        case 12:printf("\nDezembro: 31 dias");
        break;
    }
    return 0;
}
