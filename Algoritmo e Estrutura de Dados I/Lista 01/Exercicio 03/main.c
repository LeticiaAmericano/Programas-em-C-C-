#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Calculo do peso ideal
    printf("Calculo do peso ideal");
    char genero;
    float resultado, altura;
    printf("\nGenero masculino: m");
    printf("\nGenero feminino: f");
    printf("\nDigite o valor do genero:");
    scanf("%c", &genero);
    if (genero == 'm')
    {
        printf("\nCalculo do peso ideal masculino");
        printf("\nDigite a altura:");
        scanf("%f", &altura);
        resultado = (72.7 * altura) - 58;
        printf("\n%f", resultado);
    }
    else
    {
        if (genero == 'f')
        {
            printf("\nCalculo do peso ideal feminino");
            printf("\nDigite a altura:");
            scanf("%f", &altura);
            resultado = (62.1 * altura) - 44.7;
            printf("\n%f", resultado);
        }
        else
        {
            printf("\nNumero invalido");
        }
    }
    return 0;
}
