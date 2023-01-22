/*6. Faça  um  programa  que  simule  a  memória  de  um  computador:  o  usuário  irá  especificar  o
tamanho da memória, ou seja, quantos bytes serão alocados do tipo inteiro. Para tanto, a
memória solicitada deve ser um valor múltiplo do tamanho do tipo inteiro. Em seguida, o
usuário terá 2 opções: inserir um valor em uma determinada posição ou consultar o valor
contido em uma determinada posição. A memória deve iniciar com todos os dados zerados.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *vet, tam, op, posicao;

    printf("\nEspecificando o tamanho da memoria a ser alocada:\nUM elemento do tipo INTEIRO guarda 4 BYTES\n");
    printf("Dada esta informacao, diga quantos bytes de memoria serao necessarios para alocar o tamanho do vetor desejado\nEx.: vet[3] - 12 BYTES\n\nBYTES: ");
    scanf("%d", &tam);

    if (tam % 4 == 0)
    {
        vet = (int *)malloc(tam);
        for (i = 0; i < (tam / 4); i++)
        {
            printf(" %d |", vet[i]);
        }
    }
    else
    {
        printf("Este tamanho nao eh permitido!");
    }

    for (i = 0; i < (tam / 4); i++)
    {
        vet[i] = 0;
    }

    do
    {
        printf("\nMenu\n1.Inserir valor em determinada posicao\n2.Consultar valor contido em determinada posicao\n3.Sair\nOpcao: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\nDigite qual posicao do vetor deseja acessar(lembrando que comeca na posicao vet[0]): ");
            scanf("%d", &posicao);

            if (posicao > (tam / 4) && posicao < 0)
            {
                printf("Esse elemento nao existe!");
            }
            else
            {
                for (i = 0; i < (tam / 4); i++)
                {
                    if (i == posicao)
                    {
                        printf("Entre com o valor da posicao [%d]: ", i);
                        scanf("%d", &vet[i]);
                    }
                }
            }

            break;
        case 2:
            printf("Digite qual posicao do vetor deseja acessar(lembrando que comeca na posicao vet[0]): ");
            scanf("%d", &posicao);

            if (posicao > (tam / 4) && posicao < 0)
            {
                printf("Esse elemento nao existe!\n");
            }
            else
            {
                for (i = 0; i < (tam / 4); i++)
                {
                    if (i == posicao)
                    {
                        printf("Posicao [%d] = %d\n", i, vet[i]);
                    }
                }
            }

            break;
        case 3:
            printf("FIM!\n");
            return 0;
        }
    } while (op != 3);

    free(vet);
    
    return 0;
}
