#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Ler um conjunto de sal�rios e conceder reajustes de acordo com os seguintes crit�rios:
    //- Sal�rios inferiores a um mil reais, acr�scimo de dez por cento.
    //- Sal�rios entre um mil e dois mil reais, acr�scimo de oito por cento.
    //- Sal�rios acima de dois mil reais, acr�scimo de sete por cento.
    float salario, novoSalario, soma = 0, reajuste, media;
    int contador = 0;
    bool erro;
    do
    {
        do
        {
            printf("\nQuando nao houver mais salarios a serem lidos digite 0.");
            printf("\nDigite o salario que deseja ser lido:");
            scanf("%f", &salario);
            erro = salario < 0;
            if (erro)
                printf("\nApenas valores positivos e nulos");
        }
        while(erro);
        if (salario == 0)
            printf("Fim do programa");
        else
        {
            if (salario < 1000)
            {
                novoSalario = salario + 0.1*salario;
                reajuste = 0.1*salario;
                soma = soma + novoSalario;
                printf("\nO salario sera de %f", novoSalario);
                printf("\nO reajuste foi de %f", reajuste);
                contador ++;
            }
            else
            {
                if (salario >= 1000 || salario <= 2000)
                {
                    novoSalario = salario + 0.08*salario;
                    reajuste = 0.08*salario;
                    soma = soma + novoSalario;
                    printf("\nO salario sera de %f", novoSalario);
                    printf("\nO reajuste foi de %f", reajuste);
                    contador ++;
                }
                else
                {
                    novoSalario = salario + 0.07*salario;
                    reajuste = 0.07*salario;
                    soma = soma + novoSalario;
                    printf("\nO salario sera de %f", novoSalario);
                    printf("\nO reajuste foi de %f", reajuste);
                    contador ++;
                }
            }
        }
    }
    while (salario != 0);
    media = soma / contador;
    printf("\nO salario medio e de %f", media);
    return 0;
}
