/*12. Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste número.*/

#include <stdio.h>

int main()
{
    int num, logaritmo_num;
    printf("Digite um numero inteiro: ");
    scanf("%d", num);
    if (num > 0)
    {
        logaritmo_num = log10(num); // log na base 10
        printf("O logaritmo de %d eh igual a %d"), num, logaritmo_num;
    }
    else
    {
        printf("Numero invalido!");
    }
    return 0;
}