/*6. Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula. Dica: subtraia
32 dos caracteres cujo código ASCII está entre 97 e 122.*/

#include <stdio.h>

#include <string.h>

int main()
{
    char palavra[100], caractere;
    int i, x = 0;
    printf("Digite uma sequencia de caracteres minusculos: \n");
    fgets(palavra, 100, stdin);
    for (i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] != ' ' && palavra[i] >= 97 && palavra[i] <= 122)
        {
            palavra[i] = palavra[i] - 32;
        }
    }
    printf("Conversao em maisculo: \n");
    for (i = 0; palavra[i] != '\0'; i++)
    {
        printf("%c", palavra[i]);
    }
    

    return 0;
}