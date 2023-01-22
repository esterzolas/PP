/*18.  Escreva  um  programa  para  fazer  a  alocação  dinâmica  dos  blocos  de  dados  conforme
solicitado abaixo:
a) Vetor de 1024 Bytes (1 Kbyte);
b) Matriz de inteiros de dimensão 10 × 10;
c) Vetor para armazenar 50 registros contendo: nome do produto (30 caracteres), código
do produto (inteiro) e preço em reais;
d) Texto de até 100 linhas com até 80 caracteres em cada linha. */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[30];
    int codigo;
    float preco;

} dados;

int main()
{
    char **texto;
    int i, j, *vet, **mat, linhas, carac;
    dados *registro;

    // a) Vetor de 1024 Bytes (1 Kbyte);
    vet = (int *)malloc(1024);

    // b) Matriz de inteiros de dimensão 10 × 10;
    mat = (int **)malloc(sizeof(int) * 10);
    for (i = 0; i < 10; i++)
    {
        mat[i] = (int *)malloc(sizeof(int) * 10);
    }

    // c)Vetor para armazenar 50 registros contendo: nome do produto (30 caracteres), código do produto (inteiro) e preço em reais;
    registro = (dados *)malloc(sizeof(dados) * 50);

    // d) Texto de até 100 linhas com até 80 caracteres em cada linha.
    printf("Digite quantas linhas tem seu texto: ");
    scanf("%d", &linhas);

    if (linhas > 0 && linhas <= 100)
    {
        texto = (char **)malloc(sizeof(char *) * linhas);
        for (i = 0; i < linhas; i++)
        {
            texto[i] = (char *)malloc(sizeof(char) * 80);
        }
    }

    return 0;
}