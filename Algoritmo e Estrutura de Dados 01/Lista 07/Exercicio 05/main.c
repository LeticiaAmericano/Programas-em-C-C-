#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Uma empresa deseja aprimorar sua política de salários.
    int funcionarios, funcSM = 0, contador = 0;
    float salarioMinimo, salarioSuperior = 0, salario;
    bool erro, flag = 0;
    do
    {
        printf("\nDigite o salario minimo oferecido pela empresa:");
        scanf("%i", &salarioMinimo);
        erro = salarioMinimo < 0;
        if (erro)
            printf("\nNumero de funcionarios invalido.");
    }
    while (erro);
    do
    {
        printf("\nDigite o numero de funcionarios que ha na empresa:");
        scanf("%i", &funcionarios);
        erro = funcionarios < 0;
        if (erro)
            printf("\nNumero de funcionarios invalido.");
    }
    while (erro);
    while (contador < funcionarios)
    {
        do
        {
            printf("\nDigite o salario do funcionario:");
            scanf("%i", &salario);
            erro = salario < salarioMinimo;
            if(erro)
                printf("\nSalario invalido.");
            if (flag = 0 && salario > salarioMinimo)
            {
                salarioSuperior = salario;
                flag = 1;
            }
        }
        while (erro);
        contador ++;
        if(salario == salarioMinimo)
            funcSM++;
        else
            if(salario < salarioSuperior)
                salarioSuperior = salario;
    }
    printf("\nO numero de funcionarios com salario igual ao salario minimo e: %f", funcSM);
    printf("\nO menor salario entre aqueles com salario superior ao salario minimo e: %f", salarioSuperior);
    return 0;
}
