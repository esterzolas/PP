/*8. Faça um programa em que troque todas as ocorrências de uma letra L1 pela letra L2 em
uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuário.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100], L1, L2;
    int i;

    printf("Digite uma frase: \n");
    fgets(frase, 100, stdin);
    printf("Digite um carater sera substituido: \n");
    scanf("%c", &L1);
    fflush(stdin);
    printf("Digite o novo caracter: \n");
    scanf("%c", &L2);

    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == L1)
        {
            frase[i] = L2;
        }
    }

    printf("Conversao apos a troca de caracter: \n");

    for (i = 0; frase[i] != '\0'; i++)
    {
        printf("%c", frase[i]);
    }
    
    
    return 0;
}