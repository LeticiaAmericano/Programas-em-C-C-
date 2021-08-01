#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void Apresentacao();
void Resultado(int calculo);
int Idade();
int Calculo(int idade);

int main()
{
    //Construa uma nova versão para o programa que calcule o número de dias vividos por uma pessoa.
    Apresentacao();
    int idade = Idade();
    int dias = Calculo(idade);
    Resultado(dias);
    return 0;
}
void Apresentacao()
{
    printf("\nCalcular o numero de dias de vida do individuo");
}
int Idade()
{
    int idade;
    bool erro;
    do
    {
        printf("\nDigite sua idade: ");
        scanf("%i", &idade);
        erro = idade < 0;
        if(erro)
            printf("Idade invalida");
    }
    while(erro);
    return idade;
}

int Calculo(int idade)
{
    int dias;
    dias = idade*365;
    return dias;
}

void Resultado(int calculo)
{
    printf("\nOs dias vividos do indivio e %i", calculo);
}
