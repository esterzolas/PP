/*9. Faça um programa que preencha uma matriz de string com os modelos de cinco carros
(exemplos de modelos: Fusca, Gol, Vectra, etc.). Em seguida, preencha um vetor com o consumo
desses carros, isto é, quantos quilômetros cada um deles faz com um litro de combustível.
Calcule e mostre:
(a) O modelo de carro mais econômico;
(b) Quantos litros de combustível cada um dos carros cadastrados consome para
percorrer uma distância de 1.000 quilômetros.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[5][20], modelo[20];
    int i, j, k, l;
    float x, y, z, consumo[5], resultado[5];

    for (i = 0; i <= 4; i++)
    {
        printf("Digite um modelo de carro: \n");
        fgets(modelo, 20, stdin);
        for (j = 0; modelo[j] != '\0'; j++)
        {
            string[i][j] = modelo[j];
        }
        fflush(stdin);
        printf("Digite os quilometros rodados e combustivel gasto: \n");
        scanf("%f %f", &x, &y);
        consumo[i] = x / y;
        fflush(stdin);
    }

    k = consumo[0];
    l = 0;

    for (i = 0; i <= 4; i++)
    {
        if (k < consumo[i])
        {
            k = consumo[i];
            l = i;
        }

        resultado[i] = (1000 / consumo[i]);
    }

    printf("Modelo mais economico: \n");
    for (i = 0; string[l][i] != '\0'; i++)
    {
        printf("%c", string[l][i]);
    }
    
    for (i = 0; i <= 4; i++)
    {
        for (j = 0; string[i][j] != '\0'; j++)
        {
            printf("%c", string[i][j]);
        }
        printf("%0.2fL a cada 1000km", resultado[i]);
        
    }

    return 0;
}