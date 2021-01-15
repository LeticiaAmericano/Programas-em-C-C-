#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //Calcular e escreve o valor de H.
    printf("\nCalcular e escrever o valor de H.\n");
    float H, divisor = 100, soma = 0, Hanterior = 0;
    int contador;
    bool erro;
    do
    {
        printf("\nDigite o numero de termos de H que deseja: ");
        scanf("%i", &contador);
        erro = contador<= 0;
        if (erro)
            printf("\n\aApenas numeros positivos não nulos");
    }
    while(erro);
    while(contador != 0)
    {
        H = 1/divisor;
        contador--;
        divisor -= 3;
        printf("\n%f", H);
        soma = H + Hanterior + soma;
        H = Hanterior;
    }
    printf("\nO valor de H e:%f",soma);
    return 0;
}
