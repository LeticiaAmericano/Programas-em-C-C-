#include <stdio.h>
#include <stdlib.h>

int main()
{
    float LadoUm, LadoDois, LadoTres;
    //Ler os lados de um tri�ngulo.
    printf("Digite o primeiro lado:");
    scanf("%f",&LadoUm);
    printf("\nDigite o segundo lado:");
    scanf("%f",&LadoDois);
    printf("\nDigite o terceiro lado:");
    scanf("%f",&LadoTres);
    //Verificar e informar se os valores lidos consistem em um tri�ngulo.
    if(LadoUm < LadoDois + LadoTres && LadoDois < LadoTres + LadoUm && LadoTres < LadoDois + LadoUm)
    {
        printf("\nPossivel triangulo");
        //Caso seja um tri�ngulo v�lido, calcular e informar se � ele equil�tero, is�scele ou escaleno.
        if (LadoUm == LadoDois && LadoDois == LadoTres)
            printf("\nEquilatero!");
        else
        {
            if (LadoUm != LadoDois && LadoDois != LadoTres)
                printf("\nEscaleno!");
            else
                printf("\nIsosceles!");
        }
    }
    else
    printf("\nImpossivel triangulo");

    return 0;
}
