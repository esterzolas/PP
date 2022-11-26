/*4. Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado
perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de
outro número inteiro. Ex.: 1, 4, 9... */

#include <stdio.h>
#include <math.h>

int quadrado_perfeito(int num);

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Este numero nao eh um quadrado perfeito!");

        return 0;
    }

    quadrado_perfeito(num);

    return 0;
}

int quadrado_perfeito(int num)
{
    if (sqrt(num) == (int)sqrt(num))
    {
        printf("Este numero EH um queadrado perfeito!");
    }
    else
    {
        printf("Este numero NAO EH um quadrado perfeito!");
    }

    return;
}