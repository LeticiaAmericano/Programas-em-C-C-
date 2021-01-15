#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    //Construa um programa que permita identificar o perfil da turma:
    char  genero;
    float portM, portF;
    int numero = 0, contador = 0, homens = 0, mulheres = 0, idade, maior = 0, menor = 101, maior18=0;
    bool erro, flag = 0;
    do
    {
        printf("\nDigite o numero de alunos na turma: ");
        scanf("%i", &numero);
        erro = numero<0;
        if (erro)
            printf("\nApenas digitos positivos.");
    }
    while (erro);
    while (contador != numero)
    {
        do
        {
            printf("\nM:Masculino");
            printf("\nF:Feminino");
            printf("\nDigite o genero do aluno[M/F]: \n");
            fflush(stdin);
            scanf("%c", &genero);
            flag = 0;
            genero = toupper(genero);
            switch(genero)
            {
                case 'M':
                {
                    contador ++;
                    homens ++;
                    do
                    {
                        printf("\nDigite a idade do aluno: ");
                        scanf("%i", &idade);
                        if (maior < idade)
                            maior = idade;
                        if (menor > idade)
                            menor = idade;
                        if (idade >= 18)
                            maior18++;
                    }
                    while(idade > 100 || idade < 0);
                }
                break;
                case 'F':
                {
                    contador ++;
                    mulheres ++;
                    do
                    {
                        printf("\nDigite a idade do aluno: ");
                        scanf("%i", &idade);
                        if (maior < idade)
                            maior = idade;
                        if (menor > idade)
                            menor = idade;
                        if (idade >= 18)
                            maior18++;
                    }
                    while(idade > 100 || idade < 0);
                }
                break;
                default:
                {
                    printf("\nLeitura invalida");
                    flag = 1;
                }
                break;
            }

        }
        while(flag == 1);
    }
    printf("\nA turma possui %i", numero);
    printf("\nA pessoa mais velha possui a idade de: %i", maior);
    printf("\nA pessoa mais nova possui a idade de: %i", menor);
    portF = mulheres * 100 / numero;
    printf("\nA porcentagem de mulheres nessa sala e de:%.1f %", portF);
    portM = homens * 100 / numero;
    printf("\nA porcentagem de homens nessa sala e de:%.1f %", portM);
    printf("\nHa %i alunos maiores de idade nessa turma", maior18);
    return 0;
}
