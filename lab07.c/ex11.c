/*11. Escreva um programa que recebe uma string S e inteiros não-negativos I e J e imprima o
segmento S[I..J].*/

#include <stdio.h>

int main()
{
    char string[100];
    int i, j;

    fgets(string, 100, stdin);
    scanf("%d %d", &i, &j);

    for (; i <= j; i++)
    {
        printf("%c", string[i]);
    }
    
    return 0;
}