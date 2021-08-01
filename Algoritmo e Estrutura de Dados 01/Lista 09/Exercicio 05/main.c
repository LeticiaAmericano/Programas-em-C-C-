#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float Valor();
void Apresentacao();
void Potencia(float base, float expoente);

int main()
{
    //Calcular a potencia��o (n�o usar a classe Math).
    Apresentacao();
    float base = Valor();
    float expoente = Valor();
    Potencia(base, expoente);
    return 0;
}

void Apresentacao()
{
    printf("\nCalcular a potenciacao");
}

/***************************************************************
* Assinatura da fun��o: Apresentacao
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Identificacao do programa
* Dados de entrada (argumentos): Vazio
* Dado de sa�da (valor gerado pela fun��o): Vazio
*****************************************************************/

float Valor()
{
    float digito;
    bool erro;
    do
    {
        printf("\nDigite o valor: ");
        fflush(stdin);
        scanf("%f", &digito);
        erro = digito < 0;
        if(erro)
            printf("\nValor invalido");
    }
    while(erro);
    return digito;
}

/***************************************************************
* Assinatura da fun��o: Valor
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Ler o valor
* Dados de entrada (argumentos): Vazio
* Dado de sa�da (valor gerado pela fun��o): digito
*****************************************************************/

void Potencia(float base, float expoente)
{
    float potencia = 1;
    for (int contador = 0; contador < expoente; contador ++)
    {
        potencia = potencia * base;
    }
    printf("O resultado da potenciacao e igual a %f", potencia);
}

/***************************************************************
* Assinatura da fun��o:Potencia
* Data da elabora��o: 26/04/2020
* Autor: Leticia Americano Lucas
* Objetivo: Fazer o calculo da potenciacao e obter o resultado
* Dados de entrada (argumentos): base, expoente
* Dado de sa�da (valor gerado pela fun��o): Vazio
****************************************************************/
