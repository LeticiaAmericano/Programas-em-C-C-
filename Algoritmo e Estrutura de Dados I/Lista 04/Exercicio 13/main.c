#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    //Construa uma versão para a questão anterior em que a finalização do programa ocorra quando o valor zero for lido.
    float valor, maior = 0, soma = 0, media;
    int contador = 1;
    bool flag = 0;
    printf("\nQuando digitar 0 o programa sera parado\n");
    printf("\nDigite o %io valor:",CONTADOR);
    scanf("%f", &valor);
    soma = valor + soma;
    maior = valor;
    if (valor == flag)
        printf("\nObrigado por utilizar esse programa.");
    else
    {
        while(valor != flag)
        {
            if(valor > 0)
            {
                valor --;
                if(valor != 0)
                {
                    printf("%f\t", valor);
                    soma = soma + valor;
                    contador ++;
                    if (maior < valor)
                        maior=valor;
                }
            }
            else
            {
                valor ++;
                if(valor != 0)
                {
                    printf("%f\t", valor);
                    soma = soma + valor;
                    contador ++;
                    if (maior < valor)
                        maior = valor;
                }
            }
        }
        printf("\nO maior valor e:%f", maior);
        media = soma / contador;
        printf("\nA  media dos valores e:%f", media);
        printf("\nObrigado por utilizar esse programa.");
    }
    return 0;
}
