/*4. Faça um programa que  receba do  usuário o tamanho de  uma string e chame  uma função
para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo
dessa string. O programa imprime a string sem suas vogais.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *tamString(char *str1, int tam);

int main()
{
    int i, tam;
    char *str = NULL;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tam);
    fflush(stdin);

    tam++;

    str = tamString(str, tam);

    printf("Digite a string:\n");
    fgets(str, tam, stdin);

    for (i = 0; i < tam; i++)
    {
        if (str[i] != 'a' && str[i] != 'A' && str[i] != 'e' && str[i] != 'E' && str[i] != 'i' && str[i] != 'I' && str[i] != 'o' && str[i] != 'O' && str[i] != 'u' && str[i] != 'U')
            
        {
            printf("%c", str[i]);
        }
    }

    free(str);

    return 0;
}

char *tamString(char *str1, int tam)
{
    return str1 = (char *)malloc(sizeof(char) * tam);
}