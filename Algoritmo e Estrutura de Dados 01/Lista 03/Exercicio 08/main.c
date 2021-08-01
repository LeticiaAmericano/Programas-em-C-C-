#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Calcular e escrever a potenciação.
    float base, resultado;
    int   expoente;
    bool  erro;
    printf("\nDigite o valor da base:");
    scanf("%f", &base);
    do
    {
        printf("\nDigite o valor do expoente:");
        scanf("%i", &expoente);
        erro = expoente<0;
        if (erro)
            printf("\nValor invalido.");
    }
    while(erro);
    if(expoente == 0)
    {
        printf("\nA potenciacao e: 1");
    }
    else
    {
        resultado = base*base;
        for(int i = 0; i<expoente - 2; i++)
        {
            resultado = base*resultado;
        }
        printf("\nA potenciacao e: %.2f",resultado);
    }
    return 0;
}
