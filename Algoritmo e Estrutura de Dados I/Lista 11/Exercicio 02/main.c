#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Valor();
void Primo (int m, int *p1, int *p2);

int main()
{
    //Faça uma função chamada primo que recebe como parâmetro um inteiro m e dois outros inteiros p1 e p2 passados por referência. Deve retornar em p1 o maior número primo que é menor do que m e deve retornar em p2 o menor número primo que é maior do que m.
    int m = Valor();
    int p1, p2;
    Primo (m, &p1, &p2);
    printf("\nO maior primo entre os menores numeros de m e: %i ", p1);
    printf("\nO menor primo entre os maiores numeros de m e: %i ", p2);
    return 0;
}

int Valor()
{
    int x;
    do
    {
        printf("\nDigite o digito:");
        scanf("\n%i", &x);
        return x;
    }
    while(x <= 1);
}

void Primo (int m, int *p1, int *p2)
{
    int tmp = 0;
    bool flag = true;
    do
    {

    }
    while();


    if(flag == false)
    {
        tmp = m - 1;
        flag = true;
        for(int i = tmp - 1; i <= 2; i--)
        {
            if (tmp % i == 0)
                flag = false;
        }
    }
    *p1 = tmp;
    tmp = 0;
    flag = true;
    if(flag == false)
    {
        tmp = m + 1;
        flag = true;
        for(int i = tmp - 1; i <= 2; i--)
        {
            if (tmp % i == 0)
                flag = false;
        }
    }
    *p2 = tmp;
}
