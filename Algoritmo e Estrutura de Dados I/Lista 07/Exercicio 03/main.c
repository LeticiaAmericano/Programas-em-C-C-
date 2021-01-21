#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    //Verificar se dois números naturais são primos entre si.
    bool erro;
    int divisor = 1, contador = 0, primeiro, segundo, troca = 0;
    char resposta;
    do
    {
        do
        {
            printf("\nDigite o primeiro numero natural:");
            scanf("%i", &primeiro);
            erro = primeiro <= 0;
            if (erro)
                printf("\nApenas numeros positivos");
        }
        while(erro);
        do
        {
            printf("\nDigite o segundo numero natural:");
            scanf("%i", &segundo);
            erro = segundo <= 0;
            if (erro)
                printf("\nApenas numeros positivos");
        }
        while(erro);
        if (primeiro < segundo)
        {
            troca = primeiro;
            primeiro = segundo;
            segundo = troca;
        }
        while (divisor != segundo)
        {
            divisor++;
            if (primeiro % divisor == 0)
            {
                if (segundo % divisor == 0)
                    contador++;
            }
        }
        if (contador != 0)
            printf("\nOs dois numeros naturais nao sao primos entre si.");
        else
            printf("\nOs dois numeros naturais sao primos entre si.");
        do
        {
            printf("\nDeseja continuar [S/N]?");
            fflush(stdin);
            scanf("%c", &resposta);
            resposta = toupper(resposta);
            erro = resposta != 'S' && resposta != 'N';
            if (erro)
                 printf("\nResposta invalida");
        }
        while (erro);
    }
    while(resposta == 'S');
    printf("\nFim");
    return 0;
}
