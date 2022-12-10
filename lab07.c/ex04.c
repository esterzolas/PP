/*4. Faça um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa
palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra
dada por esse caractere.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[50], caractere;
    int i, x = 0;
    printf("Digite uma palavra:\n");
    scanf("%s", palavra);
    for (i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            x++;
        }
    }
    printf("Numero de vogais: %d\n", x);
    printf("Digite um caractere:\n");
    fflush(stdin);
    scanf("%c", &caractere);
    for (i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u')
        {
            palavra[i] = caractere;
        }
    }
    for (i = 0; palavra[i] != '\0'; i++)
    {
        printf("%c", palavra[i]);
    }
    
    
    return 0;
}