#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    //Construa um programa que leia um número indeterminado de números reais. Ao final da leitura, a amplitude dos valores lidos.
    float valor, maior, menor, amplitude;
    bool flag = 0;
    printf("\nDigite o valor: ");
    scanf("%f", &valor);
    menor = valor;
    maior = valor;
    if (valor == flag)
        printf("\nObrigado por utilizar esse programa.");
    else
    {
        while(valor != flag)
        {
            printf("\nDigite o valor: ");
            scanf("%f", &valor);
            if(valor != flag)
            {
                if (maior < valor)
                    maior = valor;
                if (menor > valor)
                    menor = valor;
            }
            else
                printf("Fim do programa.");
        }
        printf("\n%f", maior);
        printf("\n%f", menor);
        amplitude = maior - menor;
        printf("\nA amplitude dos valores e:%f", amplitude);
        printf("\nObrigado por utilizar esse programa.");
    }
    return 0;
}
