/*12. O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo
de substituição na qual cada letra do texto substituída por outra, que se apresenta no alfabeto
abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria
substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça
uso desse Código de César (3 posições), entre com uma string e retorne a string codificada. */

#include <stdio.h>
#include <string.h>

int main()
{
    char string[60];
    int i, x;
    printf("Digite uma frase: \n");
    fgets(string, 60, stdin);
    x = strlen(string);
    for (i = 0; i <= x; i++)
    {
        if (string[i] != ' ' && string[i] != '\0' && string[i] != '\n')
        {
            printf("%c", string[i] - 29);
        }
        else
        {
            printf("%c", string[i]);
        }
    }

    return 0;
}