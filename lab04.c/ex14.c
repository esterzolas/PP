/*14. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
saída o número de cada dado e a relação entre eles (>, <, =) de cada lançamento.*/

#include <stdio.h>

int main()
{
    int d1, d2, num;
    int i;
    printf("Digite o numero de vezes que os dados devem ser lancados: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        d1 = rand() % 6 + 1; // limitando para que o numero seja de 1 a 6
        d2 = rand() % 6 + 1;

        printf("dado 1: %d \ndado 2: %d\n", d1, d2);

        if (d1 > d2)
        {
            printf("dado 1 eh maior que dado 2\n");
        }
        else if (d1 < d2)
        {
            printf("dado 2 eh maior que dado 1\n");
        }

        else
        {
            printf("dado 1 eh igual a dado 2\n");
        }
    }

    return 0;
}