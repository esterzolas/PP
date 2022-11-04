/*24. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um
programa em que o usuário entre com o valor e o estado destino do produto e o programa
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o
estado digitado não for válido, mostrar uma mensagem de erro.*/

#include <stdio.h>

int main()
{
    float valor;
    int estado;
    printf("Estados disponiveis para entrega: \n");
    printf("1. Minas Gerais\n");
    printf("2. Sao Paulo\n");
    printf("3. Rio de Jnaiero\n");
    printf("4. Mato Grosso do Sul\n");
    printf("Digite o estado de destino: ");
    scanf("%d", &estado);
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    switch (estado)
    {
    case 1:
        valor = valor * 1.07;
        break;
    case 2:
        valor = valor * 1.12;
        break;
    case 3:
        valor = valor * 1.15;
        break;
    case 4:
        valor = valor * 1.08;
        break;
    default:
        printf("Numero invalido!");
        break;
    }
    printf("Valor com imposto: %0.2f", valor);

    return 0;
}