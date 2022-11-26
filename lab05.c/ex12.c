/*12. Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de
todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1).
Se o número lido não for maior do que zero, o programa terminará com a mensagem “Número inválido”.*/

#include <stdio.h>

int somaAlgarismos(int num);

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Numero invalido!");
        return;
    }

    printf("A soma dos algarismos eh: %d", somaAlgarismos(num));

    return 0;
}

int somaAlgarismos(int num)
{
    int soma = 0;
    while (num > 0)
    {
        soma += num % 10;
        num /= 10;
    }

    return soma;
    
}