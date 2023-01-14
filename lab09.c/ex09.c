/*9. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima
o endereço de cada posição dessa matriz.*/

#include <stdio.h>

int main()
{
    float mat[3][3];
    int *p, i, j;

    p = &mat[0][0];

    for (i = 0; i < 9; i++)
    {
        printf("Endereco da posicao %d eh %d\n", (i + 1), (p + i));
    }
    return 0;
}