#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Calcular e escrever o peso correspondente de um indivíduo em um outro planeta.
    float massa, peso;
    int planeta;
    do
    {
        printf("\nDigite a massa do individuo:");
        scanf("%f", &massa);
        printf("\n%f", massa);
    }
    while (massa < 0);
    fflush(stdin);
    do
    {
        printf("\nTabela");
        printf("\n1-Mercurio:0.37");
        printf("\n2-Venus:0.88");
        printf("\n3-Marte:0,38");
        printf("\n4-Jupiter:2.64");
        printf("\n5-Saturno:1.15");
        printf("\n6-Urano:1.17");
        printf("\nDigite o numero do planeta que deseja saber o peso:");
        scanf("%i", &planeta);
    }
    while (planeta>6 || planeta<1);
    switch (planeta)
    {
        case 1:
        {
            peso = massa*0.37;
            printf("\nO peso em Mercurio e: %f", peso);
            break;
        }
        case 2:
        {
            peso = massa*0.88;
            printf("\nO peso em Venus e: %f", peso);
            break;
        }
        case 3:
        {
            peso = massa*0.38;
            printf("\no peso em Marte e: %f", peso);
            break;
        }
        case 4:
        {
            peso = massa*0.64;
            printf("\no peso em Jupiter e: %f", peso);
            break;
        }
        case 5:
        {
            peso = massa*1.15;
            printf("\no peso em Saturno e: %f", peso);
            break;
        }
        case 6:
        {
            peso = massa*1.17;
            printf("\no peso em Urano e: %f", peso);
            break;
        }
    }
    return 0;
}
