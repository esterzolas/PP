/*cebolinha - dislalia*/

#include <stdio.h>
#include <string.h>

#include <stdio.h>

int main()
{
    char frase[100];
    int i;
    printf("Digite uma frase aqui: ");
    fgets(frase, 100, stdin);

    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == 'r' && frase[i + 1] != 'r' && frase[i + 1] != ' ' && frase[i + 1] != '\0' && frase[i + 1] != '\n')
        {
            frase[i] = 'l';
        }
        if (frase[i] == 'r' && frase[i + 1] == 'r')
        {
            frase[i + 1] = 'l';
            i++;
        }
        printf("%c", frase[i]);
    }

    return 0;
}