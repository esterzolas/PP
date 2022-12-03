/*3. Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior
valor.*/

#include <stdio.h>

int main()
{
    int matriz[4][4], i, j, coluna = 0, linha = 0, print;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite um valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    print = matriz[0][0];
    
    printf("Matriz: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matriz[i][j] < 10)
            {
                printf("%d  ", matriz[i][j]);
            }
            else
            {
                printf("%d ", matriz[i][j]);
            }
            if (matriz[i][j] > print)
            {
                print = matriz[i][j];
                coluna = i;
                linha = j;
            }
        }
        printf("\n");
    }
    printf("Localizacao e valor do maior numero digitado: [%d][%d] = %d\n", coluna, linha, print);

    return 0;
}