/*21. Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida.
Escreva uma mensagem de erro se a opção for inválida.
Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Opção*/

#include <stdio.h>

int main()
{
    float num1, num2, resultado;
    int opcao;
    printf("Escolha a opcao: \n");
    printf("1- Soma de 2 numeros.\n");
    printf("2- Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3- Produto entre 2 numeros.\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    printf("Digite dois numeros (separados por enter): ");
    scanf("%f %f", &num1, &num2);

    switch (opcao)
    {
    case 1:
        resultado = num1 + num2;
        printf("soma = %0.2f", resultado);
        break;
    case 2:
        if (num1 > num2)
        {
            resultado = num1 - num2;
        }
        else
        {
            resultado = num2 - num1;
        }
        printf("diferenca = %0.2f", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("produto = %0.2f", resultado);
        break;
    case 4:
        if (num2 == 0)
        {
            printf("Valor de denominador invalido!");
        }
        else
        {
            resultado = num1 / num2;
            printf("divisao = %0.2f", resultado);
        }
        break;
    default:
        printf("Opcao invalida!");
        break;
    }
    return 0;
}