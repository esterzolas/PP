/*8. Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/

#include <stdio.h>

int main()
{
    int primeiro_num, num;
    int maior_valor, menor_valor;
    int i;
    printf("Digite um numero: ");
    scanf("%d", &primeiro_num);

    maior_valor = primeiro_num;

    menor_valor = primeiro_num;

    for (i = 1; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num > maior_valor)
        {
            maior_valor = num;
        }
        else if (num < menor_valor)
        {
            menor_valor = num;
        }
    }
    printf("O maior valor eh: %d e o menor valor eh: %d", maior_valor, menor_valor);

    return 0;
}