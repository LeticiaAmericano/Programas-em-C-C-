#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Construa um programa que leia os votos de cada aluno do Curso e anuncie a chapa vencedora.
    float percentual;
    int opcao, chapaUm = 0, chapaDois=0, emBranco = 0, contador = 0, erro;
    do
    {
        do
        {
            printf("\nSair do programa:0");
            printf("\nChapa 1:1");
            printf("\nChapa 2:2");
            printf("\nVoto em branco ou nulo:3");
            printf("\nDigite sua opcao:");
            scanf("%i", &opcao);
            erro = opcao < 0 || opcao > 3;
            if (erro)
                printf("\n\aOpcao invalida\n");
        }
        while(erro);
        switch(opcao)
        {
        case 0:
        {
            printf("\nObrigado por usar este programa.");
        }
        break;
        case 1:
        {
            printf("\nVotado na Chapa 1\n");
            chapaUm++;
            contador++;
        }
        break;
        case 2:
        {
            printf("\nVotado na Chapa 2\n");
            chapaDois++;
            contador++;
        }
        break;
        case 3:
        {
            printf("\nVoto em branco ou nulo\n");
            emBranco++;
            contador++;
        }
        break;
        }
    }
    while(opcao!=0);
    printf("\nNumero de votos da Chapa 1:%i", chapaUm);
    printf("\nNumero de votos da Chapa 2:%i", chapaDois);
    printf("\nNumero de votos em branco ou nulo:%i", emBranco);
    if (chapaUm > chapaDois)
    {
        printf("\nChapa 1 venceu");
        percentual = ((float)chapaUm / (float)contador)*100;
        printf("\n%.2f%", percentual);
    }
    else
    {
        if(chapaDois > chapaUm)
        {
            printf("\nChapa 2 venceu");
            percentual = ((float)chapaDois / (float)contador)*100;
            printf("\n%.2f%", percentual);
        }
        else
            printf("\nAs Chapas 1 e 2 empataram");
    }
    return 0;
}
