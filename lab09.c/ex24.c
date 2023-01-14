/*24.  Escreva  uma  função  que  receba  um  array  de  inteiros  V  e  os  endereços  de  duas  variáveis
inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do array. Escreva
também uma função main que use essa função.*/

#include <stdio.h>
#include <stdlib.h>

int armazenar(int *V, int tam, int *min, int *max);

int i;

int main()
{
    int *V, tam, min, max;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tam);

    V = (int *)malloc(sizeof(int) * tam);

    for (i = 0; i < tam; i++)
    {
        printf("Entre com um valor para posicao [%d]: ", i);
        scanf("%d", &V[i]);
    }

    armazenar(V, tam, &min, &max);

    printf("\nMaior valor: %d\nMenor valor: %d", max, min);

    return 0;
}

int armazenar(int *V, int tam, int *min, int *max)
{
    int j, sub;

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            if (V[j] < V[i])
            {
                sub = V[i];
                V[i] = V[j];
                V[j] = sub;
            }
        }
    }

    *min = V[tam - 1];
    *max = V[0];
   
}