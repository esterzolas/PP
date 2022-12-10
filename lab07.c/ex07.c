/*7. Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100], sem_espaco[100];
    int i, x = 0;

    printf("Digite uma frase:\n");
    fgets(frase, 100, stdin);
    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] != ' ')
        {
            sem_espaco[x] = frase[i];
            x++;
        }
    }

    printf("Conversao apos a retirada de espaco: \n");

    for (i = 0; sem_espaco[i] != '\0'; i++)
    {
        printf("%c", sem_espaco[i]);
    }
    

    return 0;
}