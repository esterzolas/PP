/*16. Faça um programa que apresente um menu de opções para o cálculo das seguintes
operações entre dois números:
 Adição (opção 1)
 Subtração (opção 2)
 Multiplicação (opção 3)
 Divisão (opção 4).
 Saída (opção 5)
O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do resultado
e a volta ao menu de opções. O programa só termina quando for escolhida a opção de saída
(opção 5).*/

#include <stdio.h>

int main()
{
    int opcao;
    float num1, num2, resultado;
    do
    {
        printf("Calculadora:\n");
        printf("Opcao 1: Adicao\n");
        printf("Opcao 2: Subtracao\n");
        printf("Opcao 3: Multiplicacao\n");
        printf("Opcao 4: Divisao\n");
        printf("Opcao 5: Sair\n");
        scanf("%d", &opcao);

        if (opcao == 5)
        {
            printf("Ate a proxima!");
            return 0;
        }
        printf("Digite dois numeros: ");
        scanf("%f %f", &num1, &num2);
        switch (opcao)
        {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %0.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %0.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %0.2f\n", resultado);
            break;
        case 4:
            resultado = num1 / num2;
            printf("Resultado: %0.2f\n", resultado);
            break;

        default:
            printf("Numero invalido!");
            break;
        }
        
    } while (opcao != 5);

    return 0;
}