/*2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura. */

#include <stdio.h>
#include <string.h>

struct dados
{
    char nome[20];
    int idade;
    char endereco[100];
};

typedef struct dados dados;

int main()
{
    dados pessoa;
    printf("Digite seu nome e sobrenome: ");
    fgets(pessoa.nome, 20, stdin);
    fflush(stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    fflush(stdin);
    printf("Digite seu endereco: ");
    fgets(pessoa.endereco, 100, stdin);
    fflush(stdin);

    printf("\nNome: %sIdade: %d\nEndereco: %s", pessoa.nome, pessoa.idade, pessoa.endereco);

    return 0;
}
