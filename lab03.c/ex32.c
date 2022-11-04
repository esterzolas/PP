/*32. Escrever um programa que leia o código do produto escolhido do cardápio de uma
lanchonete e a quantidade. O programa deve calcular o valor a ser pago por aquele lanche.
Considere que a cada execução somente será calculado um pedido. O cardápio da lanchonete
segue o padrão abaixo:*/

#include <stdio.h>

int main()
{
    int codigo, quantidade; 
    float valor;
    printf("Digite o codigo do pedido: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    switch (codigo)
    {
    case 100:
        valor = quantidade * 1.20;
        printf ("Valor: %0.2f", valor);
        break;
    case 101:
        valor = quantidade * 1.30;
        printf ("Valor: %0.2f", valor);
        break;
    case 102:
        valor = quantidade * 1.50;
        printf ("Valor: %0.2f", valor);
        break;
    case 103:
        valor = quantidade * 1.20;
        printf ("Valor: %0.2f", valor);
        break;
    case 104:
        valor = quantidade * 1.70;
        printf ("Valor: %0.2f", valor);
        break;
    case 105:
        valor = quantidade * 2.20;
        printf ("Valor: %0.2f", valor);
        break;
    case 106:
        valor = quantidade * 1.00;
        printf ("Valor: %0.2f", valor);
        break;

    default:
    printf ("Codigo invalido!");
        break;
    }
    return 0;
}