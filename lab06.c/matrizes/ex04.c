/*4. Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse
valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”.*/

#include <stdio.h>

int main()
{
    int matriz[5][5], i, j;
    int x;
    int linha = 0, coluna = 0, condicao = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite um valor para guardar na matriz: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite um valor qualquer: ");
    scanf("%d", &x);

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (matriz[i][j] == x)
            {
                condicao = 1;
                linha = i;
                coluna = j;
            }
        }
    }

    if (condicao == 1)
    {
        printf("Valor de x encontrado na linha %d coluna %d", linha, coluna);
    }
    else if (condicao == 0)
    {
        printf("Valor nao encontrado!");
    }
    
    return 0;
}