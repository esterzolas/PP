/*18. Faça um programa que mostre ao usuário um menu com 4 opções de operações
matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa
então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.*/

#include <stdio.h>

int main()
{
    int opcao;
    float num1, num2, resultado;
    printf("Calculadora \n");
    printf("1.Soma\n");
    printf("2.Subtracao\n");
    printf("3.Multiplicacao\n");
    printf("4.Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Digite dois valores (separados por enter): ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 + num2;
        printf("Resultado: %0.2f", resultado);
        break;
    case 2:
        printf("Digite dois valores (separados por enter): ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 - num2;
        printf("Resultado: %0.2f", resultado);
        break;
    case 3:
        printf("Digite dois valores (separados por enter): ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 * num2;
        printf("Resultado: %0.2f", resultado);
        break;
    case 4:
        printf("Digite dois valores (separados por enter): ");
        scanf("%f %f", &num1, &num2);
        resultado = num1 / num2;
        printf("Resultado: %0.2f", resultado);
        break;
    default:
        printf("NUMERO INVALIDO!");
        break;
    }
    return 0;
}
