/*7. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média.*/


#include <stdio.h>

int main()
{
    int i = 0;
    int soma = 0;
    float media = 0;

    while (i < 10)
    {
        int valor;
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if (valor > 0)
        {
            soma += valor;
            media++;
        }
        i++;
    }
    printf("A media dos valores digitados eh %d\n", soma / media);
    
    return 0;
}