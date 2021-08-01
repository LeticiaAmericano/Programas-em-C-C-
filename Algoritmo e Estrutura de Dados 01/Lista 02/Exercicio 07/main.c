#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Calcular o IMC de um adulto e mostre sua condição.
    float peso, altura, IMC;
    do
    {
        printf("Digite o peso em quilograma:");
        scanf("%f",&peso);
        printf("\nDigite a altura em metro:");
        scanf("%f",&altura);
        IMC = peso / pow(altura,2);
        printf("\n%f",IMC);
    }
    while (IMC < 0);
    if(IMC < 16)
        printf("\nMagreza grave");
    else
    {
        if(IMC >= 16 && IMC < 17)
            printf("\nMagreza moderada");
        else
        {
            if(IMC >= 17 && IMC < 18.5)
                printf("\nMagreza leve");
            else
            {
                if(IMC >= 18.5 && IMC < 25)
                    printf("\nSaudavel");
                else
                {
                    if(IMC >= 25 && IMC < 30)
                        printf("\nSobrepeso");
                    else
                    {
                        if(IMC >= 30 && IMC < 35)
                            printf("\nObesidade Grau I");
                        else
                        {
                            if(IMC >= 35 && IMC < 40)
                                printf("\nObesidade Grau II (severa)");
                            else
                            {
                                if(IMC >= 40)
                                    printf("\nObesidade Grau III (mórbida)");
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
