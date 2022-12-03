/*4. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram
o maior e o menor valor.*/

#include <stdio.h>

int main()
{
    float vetor[5];
    float maior_valor, menor_valor; 
    int i;

    printf("Digite cinco numeros:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%f", &vetor[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            maior_valor = vetor[i];
            menor_valor = vetor[i];
        } else if (maior_valor < vetor[i])
        {
            maior_valor = vetor[i];
        }
        else if (menor_valor > vetor[i])
        {
            menor_valor = vetor[i];
        }
    }
    
    printf("Maior = %0.2f\nMenor = %0.2f", maior_valor, menor_valor);

    return 0;
}

