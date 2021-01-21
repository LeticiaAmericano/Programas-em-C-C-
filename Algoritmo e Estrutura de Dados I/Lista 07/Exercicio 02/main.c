#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Calcular e escrever a menor nota obtida por um aluno aprovado, bem como a maior nota obtida por um aluno reprovado.
    float nota, maior = 100, menor = 0;
    bool flag = 0;
    do
    {
        printf("\nCaso deseje parar o programa digite -1");
        printf("\nDigite a nota [0,100]:");
        scanf("%f", &nota);
        if(nota >= -1 && nota < 100)
        {
            if(nota >= 70)
            {
                printf("\nO aluno foi aprovado.");
                if (nota < maior)
                    maior = nota;
            }
            else
            {
                if (nota < 70 && nota > -1)
                {
                    printf("\nO aluno foi reprovado.");
                    if (nota > menor)
                        menor = nota;
                }
            }
            if (nota == -1)
                flag = 1;
        }
        else
            printf("Nenhum valor consideravel foi informado");
    }
    while (flag != 1);
    if(flag != 0)
    printf("\nA menor nota obtida por um aluno aprovado foi: %f", maior);
    printf("\nA maior nota obtida por um aluno reprovado foi: %f", menor);
    return 0;
}
