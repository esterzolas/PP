/*10. Ler o nome e o valor de uma determinada mercadoria de uma loja. Sabendo que o desconto
para pagamento à vista é de 10% sobre o valor total, calcular o valor a ser pago à vista. Escrever
o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.*/

#include <stdio.h>

#include <string.h>

int main()
{
    char mercadoria[40], valor[10];
    float valor_total, valor_vista;
    int i;

    printf("Digite o nome de uma mercadoria: \n");
    fgets(mercadoria, 40, stdin);
    fflush(stdin);
    printf("Digite o preco da mercadoria: \n");
    fgets(valor, 10, stdin);
    valor_total = atof(valor);
    valor_vista = valor_total * 0.90;
    printf("Nome: ");

    for (i = 0; mercadoria[i] != '\n'; i++)
    {
        printf("%c", mercadoria[i]);
    }

    printf("\nValor total: %0.2f\n", valor_total);
    printf("Valor do desconto: %0.2f\n", valor_total * 0.10);
    printf("Valor a ser pago a vista: %0.2f\n", valor_vista);

    return 0;
}