/*10.  Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em um
vetor de double, depois use a função MALLOC para reservar (alocar) o espaço de memória
de acordo com o especificado pelo usuário. Esse vetor deve ter um tamanho maior ou igual
a  10  elementos.  Use  este  vetor  dinâmico  como  um  vetor  comum,  atribuindo  aos  10
primeiros elementos do vetor valores aleatórios (usando a função rand) entre 0 e 100. Exiba
na tela os valores armazenados nos 10 primeiros elementos do vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *vet;
    int i, tam;

    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &tam);

    if (tam >= 10)
    {
        vet = (double *)malloc(sizeof(double) * tam);
    } else {
        printf("O vetor deve ter mais de 10 elementos!");
    }
    
    for (i = 0; i < 10; i++)
    {
        vet[i] = rand() % 100;
    }

    for (i = 0; i < 10; i++)
    {
        printf(" %g |", vet[i]); // li que "%g" eh como se fosse deixar a maquina colocar quantas casas decimais ela achar necessário
    }
    
    free(vet);
    
    return 0;
}