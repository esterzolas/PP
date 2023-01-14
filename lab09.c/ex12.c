/*12.  Faça  um  programa  que  leia  três valores  inteiros  e  chame  uma  função  que  receba  estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o
segundo menor valor na variável do meio, e o maior valor na última variável. A função deve
retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir
os valores ordenados na tela.*/

#include <stdio.h>

int ordenacao(int *p);

int main()
{
    int i, num[3];

    for (i = 0; i < 3; i++)
    {
        printf("Digite um numero para posicao %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    ordenacao(&num);

    if (ordenacao(&num) == 0)
    {
        printf("menor valor = %d\n", num[0]);
        printf("segundo menor valor = %d\n", num[1]);
        printf("maior valor = %d\n", num[2]);
    }

    if (ordenacao(&num) == 1)
    {
        printf("Os valores sao iguais");
    }

    return 0;
}

int ordenacao(int *p)
{
    int i, j, sub;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (p[i] > p[j])
            {
                sub = p[i];
                p[i] = p[j];
                p[j] = sub;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (p[i] != p[j])
            {
                return 0;
            }
        }
    }
    return 1;
}