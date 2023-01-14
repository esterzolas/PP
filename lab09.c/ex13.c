/* 13.  Elabore  uma  função  que  receba  duas  strings  como  parâmetros  e  verifique  se  a  segunda  string ocorre dentro da primeira.
Use aritmética de ponteiros para acessar os caracteres das  strings. */

#include <stdio.h>
#include <string.h>

void palavraRep(char *str1, char *str2, int tam1, int tam2, int *teste);

void main()
{
    int tam1, tam2, teste;

    char str1[100], str2[100];

    printf("\n- Digite a primeira frase: ");
    scanf("%100[^\n]", &str1);
    fflush(stdin);

    printf("\n- Digite a segunda frase: ");
    scanf("%100[^\n]", &str2);
    fflush(stdin);

    tam1 = strlen(str1);
    tam2 = strlen(str2);

    palavraRep(&str1, &str2, tam1, tam2, &teste);

    if (teste == 0)
    {
        printf("\n- A segunda funcao OCORRE na primeira!\n");
    }
    else
    {
        printf("\n- A segunda funcao NAO OCORRE na primeira!\n");
    }
}

void palavraRep(char *str1, char *str2, int tam1, int tam2, int *teste)
{

    int i, j, achado = 0;

    for (i = 0; i <= tam1; i++)
    {
        achado = 0;

        if (*(str1 + i) == *(str2))
        {

            for (j = 0; j < tam2; j++)
            {

                if (*(str1 + (i + j)) == *(str2 + j))
                {
                    achado++;
                }
            }

            if (achado == tam2)
            {
                *teste = 0;
                return;
            }
        }
    }

    *teste = 1;
}