/*23.  Escreva  uma  função  que  retorna  o  maior  valor  de  um  array  de  tamanho  N.  Escreva  um
programa que leia N valores inteiros, imprima o array com ‘k’ elementos por linha, e o maior
elemento. O valor de ‘k’ também deve ser fornecido pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int maior(int *vet, int tam);

int i;

int main()
{
    int *vet, tam, k, j = 0;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tam);

    vet = (int *)malloc(sizeof(int) * tam);

    for (i = 0; i < tam; i++)
    {
        printf("Entre com um valor para posicao [%d]: ");
        scanf("%d", &vet[i]);
    }

    printf("Digite quantos elementos devem aparecer por linha: ");
    scanf("%d", &k);

    printf("Vetor:\n");
    for (i = 0; i < tam; i++, j++)
    {

        if (j < k)
        {
            printf(" %d |", vet[i]);
        }
        else
        {
            j = -1;
            i--;
            printf("\n");
        }
    }

    maior(vet, tam);
    printf("\nMaior valor: %d\n", vet[0]);

    return 0;
}

int maior(int *vet, int tam)
{
    int j, sub;

    for (i = 0; i < tam - 1; i++)
    {
        for (j = i + 1; j < tam; j++)
        {
            if (*(vet + i) < *(vet + j))
            {
                sub = *(vet + i);
                *(vet + i) = *(vet + j);
                *(vet + j) = sub;
            }
        }
    }

    return 1;
}