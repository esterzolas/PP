/*16. Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
correspondente a este número. Isto é, janeiro se 1, fevereiro se 2, e assim por diante.*/

#include <stdio.h>

int main()
{
    int num;
    printf ("Digite um numero de 1 a 12: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("JANEIRO");
        break;
    case 2:
        printf("FEVEREIRO");
        break;
    case 3:
        printf("MARCO");
        break;
    case 4:
        printf("ABRIL");
        break;
    case 5:
        printf("MAIO");
        break;
    case 6:
        printf("JUNHO");
        break;
    case 7:
        printf("JULHO");
        break;
    case 8:
        printf("AGOSTO");
        break;
    case 9:
        printf("SETEMBRO");
        break;
    case 10:
        printf("OUTUBRO");
        break;
    case 11:
        printf("NOVEMBRO");
        break;
    case 12:
        printf("DEZEMBRO");
        break;

    default:
        printf("NUMERO INVALIDO");
        break;
    }
    return 0;
}