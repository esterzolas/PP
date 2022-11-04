/*5. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.*/

#include <stdio.h>

int main()
{
    int num;
    printf("Digite um valor inteiro aqui: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
      printf("O numero recebido eh par!");
      }

    else{
        printf("O numero recebido eh impar!");
    }

    return 0;
}