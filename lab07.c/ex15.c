/* 15. Faça um programa que contenha um menu com as seguintes opções:
(a) Ler uma string S1 (tamanho máximo 20 caracteres);
(b) Imprimir o tamanho da string S1;
(c)  Comparar  a  string  S1  com  uma  nova  string  S2  fornecida  pelo  usuário  e  imprimir  o
resultado da comparação;
(d)  Concatenar  a  string  S1  com  uma  nova  string  S2  e  imprimir  na  tela  o  resultado  da
concatenação;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse
ser informado pelo usuário;
(g) Substituir a primeira ocorrência do caractere  C1 da  string S1 pelo caractere C2. Os
caracteres C1 e C2 serão lidos pelo usuário;
(h)  Verificar  se  uma  string  S2  é  substring  de  S1.  A  string  S2  deve  ser  informada  pelo
usuário;
(i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual
posição deve ser criada a substring e qual é o tamanho da substring.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20], substring[20];
    int C1, C2, opcao, posicao, tamanho,i, contador = 0;

    do
    {
        printf("(a) Ler uma string S1;\n");
        printf("(b) Imprimir o tamanho da string S1;\n");
        printf("(c) Comparar a string S1 com uma nova string S2;\n");
        printf("(d) Concatenar a string S1 com string S2 ;\n");
        printf("(e) Imprimir a string S1 de forma reversa;\n");
        printf("(f) Contar quantas vezes um dado caractere aparece na string S1;\n");
        printf("(g) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2;\n");
        printf("(h) Verificar se uma string S2 é substring de S1;\n");
        printf("(i) Retornar uma substring da string S1;\n");
        printf("Digite a opcao desejada:\n");
        scanf("%c", &opcao);
        getchar();

        switch (opcao)
        {
        case 'a':
            printf("\nDigite uma string:\n");
            fgets(str1, 20, stdin);
            str1[strlen(str1) - 1] = '\0';
            break;

        case 'b':
            printf("O tamanho da string eh: %d\n", strlen(str1));
            break;

        case 'c':
            printf("\nDigite uma segunda string: ");
            fgets(str2, 20, stdin);
            printf(strcmp(str1, str2) ? "As strings sao diferentes\n" : "As strings sao iguais\n");
            break;

        case 'd':
            printf("\nDigite uma segunda string: ");
            fgets(str2, 20, stdin);
            printf("O resultado da concatenacao eh: \"%s\"\n", strcat(str1, str2));
            break;

        case 'e':
            for (i = strlen(str1) - 1; i >= 0; i--)
            {
                printf("%c", str1[i]);
            }
            printf("\n");
            break;

        case 'f':
            printf("\nDigite um caractere: ");
            scanf(" %c", &C1);
            for (i = 0; str1[i] != '\0'; i++)
            {
                if (str1[i] == C1)
                {
                    contador++;
                }
            }
            printf("\nO caractere %c aparece %d vezes na string S1\n", C1, contador);
            break;

        case 'g':
            printf("\nDigite um caractere: ");
            scanf(" %c", &C1);
            printf("\nDigite outro caractere: ");
            scanf(" %c", &C2);
            for (i = 0; str1[i] != '\0'; i++)
            {
                if (str1[i] == C1)
                {
                    str1[i] = C2;
                    break;
                }
            }
            printf("A string S1 agora eh: %s\n", str1);
            break;

        case 'h':
            printf("\nDigite a string S2: ");
            fgets(str2, 20, stdin);
            if (strstr(str1, str2) != NULL)
            {
                printf("A string S2 eh substring de S1\n");
            }
            else
            {
                printf("A string S2 nao eh substring de S1\n");
            }
            break;

        case 'i':
            printf("\nDigite a posicao: ");
            scanf("%d", &posicao);
            printf("\nDigite o tamanho: ");
            scanf("%d", &tamanho);

            for (i = posicao; i <= tamanho; i++)
            {
                substring[i] = str1[posicao + i];
            }
            substring[i + 1] = '\0';

            printf("A substring eh: %s\n", substring);
            break;
        }
    } while (opcao >= 'a' || opcao <= 'i');
}