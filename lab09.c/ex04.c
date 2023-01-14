/*4. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2
variáveis e troque o seu conteúdo, i.e., esta função é chamada passando duas variáveis A e
B, por exemplo, e após a execução da função, A conterá o valor de B e B terá o valor de A.*/

#include <stdio.h>

void troca(int *p1, int *p2);

int main()
{
    int num1, num2;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite um numero inteiro: ");
    scanf("%d", &num2);

    printf("\nValores antes da mudanca\n");
    printf("numero 1 = %d\n", num1);
    printf("numero 2 = %d\n", num2);

    troca(&num1, &num2);

    printf("\nValores depois da mudanca\n");
    printf("numero 1 = %d\n", num1);
    printf("numero 2 = %d\n", num2);

    return 0;
}

void troca(int *p1, int *p2)
{
    int sub;
    sub = *p1;
    *p1 = *p2;
    *p2 = sub;

}