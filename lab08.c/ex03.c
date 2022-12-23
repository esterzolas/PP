/*3. Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a informação de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela. */

#include <stdio.h>
#include <string.h>

struct aluno
{
    char nome[20];
    char matricula[15];
    char curso[20];
};

typedef struct aluno aluno;

int main()
{
    aluno discente[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome e sobrenome: ");
        fgets(discente[i].nome, 20, stdin);
        fflush(stdin);
        printf("Digite a matricula: ");
        fgets(discente[i].matricula, 15, stdin);
        fflush(stdin);
        printf("Digite o curso: ");
        fgets(discente[i].curso, 20, stdin);
    }

    printf("\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Nome: %sMatricula: %sCurso: %s\n\n", discente[i].nome, discente[i].matricula, discente[i].curso);
    }

    return 0;
}