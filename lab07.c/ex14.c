/*14. Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N.
Concatene não mais que N caracteres da string str2 à string str1 e termine str1 com ‘\0’.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[100];
    int i, N;

    printf("Digite uma string: \n");
    fgets(str1, 100, stdin);
    fflush(stdin);
    printf("Digite outra string: \n");
    fgets(str2, 100, stdin);
    fflush(stdin);
    printf("Digite um inteiro positivo: \n");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        str3[i] = str2[i];
    }

    strcat(str1, str3);

    for (i = 0; i != '\0'; i++)
    {
        printf("%c", str1[i]);
    }

    return 0;
}