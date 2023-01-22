/*20.  Faça um programa que:
a) Peça para o usuário entrar com o nome e a posição (coordenadas X e Y) de N cidades e
as armazene em um vetor de estruturas (N é informado pelo usuário);
b) Crie uma matriz de distâncias entre cidades de tamanho N x N;
c) Calcule as distâncias entre cada duas cidades e armazene na matriz;
d) Exiba na tela a matriz de distancias obtida;
e) Quando  o  usuário  digitar  o  número  de  duas  cidades  o  programa  deverá  retornar  a
distância entre elas. */

#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int X;
    int Y;
} loc;

typedef struct
{
    char nome[30];
    loc posicao;
} cidade;

int main()
{
    cidade *vet;
    int i, N;

    //a) Peça para o usuário entrar com o nome e a posição (coordenadas X e Y) de N cidades e as armazene em um vetor de estruturas (N é informado pelo usuário);
    printf("Digite a quantidade total de cidades: ");
    scanf("%d", &N);

    vet = (cidade *)malloc(sizeof(cidade) * N);

    for (i = 0; i < N; i++)
    {
        printf("Digite o nome da cidade: ");
        scanf("%s^[\n]", &(vet + i)->nome);

        printf("Digite as coordenas X e Y da cidade:\nX: ");
        scanf("%d", &(vet + i)->posicao.X);
        printf("Y: ");
        scanf("%d", &(vet + i)->posicao.Y);
    }

    // b) Crie uma matriz de distâncias entre cidades de tamanho N x N;

    // c) Calcule as distâncias entre cada duas cidades e armazene na matriz;
    // d) Exiba na tela a matriz de distancias obtida;
    // e) Quando  o  usuário  digitar  o  número  de  duas  cidades  o  programa  deverá  retornar  a distância entre elas.

    return 0;
}