/*3. Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de
retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.*/

#include <stdio.h>

sinal(int num);

int main()
{

    int num;
    printf("Digite um numero para verificacao: ");
    scanf("%d", &num);

    sinal(num);

    printf("O numero digitado eh: ");

    if (sinal(num) == -1)
    {
        printf("negativo");
    }
    else if (sinal(num) == 1)
    {
        printf("positivo");
    }
    else if (sinal(num) == 0)
    {
        printf("zero");
    }

    return 0;
}

int sinal(int num)
{
    if (num < 0)
    {
        return -1;
    }
    else
    {
        return 1;
    }
    if (num == 0)
    {
        return 0;
    }
}