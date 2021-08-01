#include <stdio.h>
#include <stdlib.h>

int main()
{
    float LadoUm, LadoDois, LadoTres;
    //Ler os lados de um triângulo.
    printf("Digite o primeiro lado:");
    scanf("%f",&LadoUm);
    printf("\nDigite o segundo lado:");
    scanf("%f",&LadoDois);
    printf("\nDigite o terceiro lado:");
    scanf("%f",&LadoTres);
    //Verificar e informar se os valores lidos consistem em um triângulo.
    if(LadoUm < LadoDois + LadoTres && LadoDois < LadoTres + LadoUm && LadoTres < LadoDois + LadoUm)
    {
        printf("\nPossivel triangulo");
        //Caso seja um triângulo válido, calcular e informar se é ele equilátero, isóscele ou escaleno.
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
