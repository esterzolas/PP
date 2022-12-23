/*4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos;
b) Encontre o aluno com maior nota da primeira prova;
c) Encontre o aluno com maior média geral;
d) Encontre o aluno com menor média geral;
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.*/

#include <stdio.h>
#include <string.h>

struct aluno
{
    char nome[100];
    char matricula[15];
    float nota1;
    float nota2;
    float nota3;
};

typedef struct aluno aluno;

int main()
{
    aluno discente[5];
    int i, j;
    float media[5], maiorN1, maiorMG, menorMG;
    char alunoN1[100], alunomaMG[100], alunomeMG[100];

    // a)

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome e sobrenome: ");
        fgets(discente[i].nome, 20, stdin);
        fflush(stdin);
        printf("Digite a matricula: ");
        fgets(discente[i].matricula, 15, stdin);
        fflush(stdin);
        printf("Digite a NOTA 1: ");
        scanf("%f", &discente[i].nota1);
        fflush(stdin);
        printf("Digite a NOTA 2: ");
        scanf("%f", &discente[i].nota2);
        fflush(stdin);
        printf("Digite a NOTA 3: ");
        scanf("%f", &discente[i].nota3);
        fflush(stdin);
        printf("\n");
    }

    // b)

    maiorN1 = discente[0].nota1;
    for (j = 1; j < 5; j++)
    {
        if (discente[j].nota1 > maiorN1)
        {
            maiorN1 = discente[j].nota1;
            strcpy(alunoN1, discente[j].nome);
        }
    }
    printf("O aluno com maior nota na primeira prova foi: %s", alunoN1);

    // c)

    maiorMG = discente[0].nota1 + discente[0].nota2 + discente[0].nota3;
    for (j = 1; j < 5; j++)
    {
        media[j] = discente[j].nota1 + discente[j].nota2 + discente[j].nota3;
        if (media[j] > maiorMG)
        {
            maiorMG = media[j];
            strcpy(alunomaMG, discente[j].nome);
        }
    }
    printf("O aluno com maior media geral foi: %s", alunomaMG);

    // d)

    menorMG = discente[0].nota1 + discente[0].nota2 + discente[0].nota3;
    for (j = 1; j < 5; j++)
    {
        media[j] = discente[j].nota1 + discente[j].nota2 + discente[j].nota3;
        if (media[j] < menorMG)
        {
            menorMG = media[j];
            strcpy(alunomeMG, discente[j].nome);
        }
    }
    printf("O aluno com menor media geral foi: %s", alunomeMG);

    // e)

    for (j = 0; j < 5; j++)
    {
        media[j] = discente[j].nota1 + discente[j].nota2 + discente[j].nota3;
        if (media[j] >= 6)
        {
            printf("\n %s APROVADO com media %0.2f \n", discente[j].nome, media[j]);
        }
        else
        {
            printf("%s REPROVADO com media %0.2f \n", discente[j].nome, media[j]);
        }
    }

    return 0;
}