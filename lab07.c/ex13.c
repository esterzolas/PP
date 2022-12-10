/*13. Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando
que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita
para a esquerda como da esquerda para a direita.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char frase[50];
    int i, x = 0, teste;

    printf("Digite uma string: ");
    fgets(frase, 50, stdin);

    for (i = 0; frase[i] != '\0'; i++)
    {
        x = i;
    }
    teste = x - 1;

    for (i = 0; i < x; i++)
    {
        if (frase[teste] == ' ')
        {
            teste--;
        }
        if (frase[i] == ' ')
        {
            i++;
        }
        if (frase[i] != frase[teste])
        {
            printf("Nao eh um palindromo\n");
            return 0;
        }
        teste--;
    }
    printf("Eh um palindromo\n");

    return 0;
}