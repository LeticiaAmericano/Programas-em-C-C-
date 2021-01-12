//Construa um programa que leia as notas obtidas pelos alunos [0..100].
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    float nota, somaNotas = 0, media, maior, menor, alunos, contador = 0, notaAnterior=0;
    do
    {
        printf("\nDigite o numero de alunos:");
        scanf("%f",&alunos);
    }
    while(alunos<=0);
    printf("\n%f",alunos);
    do
    {
        do
        {
            printf("\nDigite a nota:");
            scanf("%f", &nota);
        }
        while(nota < 0 || nota > 100);
        if (nota > notaAnterior)
            maior = nota;
        if (nota < notaAnterior)
            menor = nota;
        notaAnterior = nota;
        if(nota>=70)
            printf("\nO aluno foi aprovado.");
        else
            printf("\nO aluno foi reprovado.");
        somaNotas = somaNotas + nota;
        contador = contador + 1;
    }
    while(contador != alunos);
    media = somaNotas / alunos;
    printf("\nA media entre os alunos dessa classe e:%f", media);
    printf("\nA maior nota foi: %f", maior);
    printf("\nA menor nota foi: %f", menor);
    return 0;
}
