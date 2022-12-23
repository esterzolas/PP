/*10. Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor (máximo 15 letras) e
ano. Procure um livro por título, perguntando ao usuário qual título deseja buscar. Mostre os dados de todos os livros encontrados. */

#include <stdio.h>
#include <string.h>

struct dados
{
    char titulo[30];
    char autor[15];
    int ano;
};

typedef struct dados dados;

int main()
{
    dados livro[5];
    char titulo2[30];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o titulo do livro: ");
        fgets(livro[i].titulo, 30, stdin);
        fflush(stdin);
        printf("Digite o autor do livro: ");
        fgets(livro[i].autor, 15, stdin);
        fflush(stdin);
        printf("Digite o ano do livro: ");
        scanf("%d", &livro[i].ano);
        fflush(stdin);
        printf("\n");
    }

    printf("Digite um titulo para busca: \n\n");
    fgets(titulo2, 30, stdin);
    fflush(stdin);

    for (i = 0; i < 5; i++)
    {
        if (strcmp(livro[i].titulo, titulo2) == 0)
        {
            printf("TITULO: %sAUTOR: %sANO: %d\n", livro[i].titulo, livro[i].autor, livro[i].ano);
        }
    }
    return 0;
}
