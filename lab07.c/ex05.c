/*5. Escreva um programa para converter uma cadeia de caracteres de letras maiúsculas em letras
minúsculas. Dica: some 32 dos caracteres cujo código ASCII está entre 65 e 90.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[50], caractere;
    int i, x = 0;

    printf("Digite uma sequencia de caracteres maiusculos:\n");
    fgets(palavra, 50, stdin);

    for (i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] != ' ' && palavra[i] >= 65 && palavra[i] <= 90)
        {
            palavra[i] = palavra[i] + 32;
        }
    }

    printf("Conversao em minusculo: \n");

    for (i = 0; palavra[i] != '\0'; i++)
    {
        printf("%c", palavra[i]);
    }
    
    
    return 0;
}