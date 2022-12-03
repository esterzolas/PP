/*8. Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os
dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso
o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para
ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o
vetor final que foi digitado.*/

#include <stdio.h>

int main()
{
    int vetor[10];
    int i, j, k = 0;

    for (i = 0; i < 10; i++)
    {
        do
        {
            printf("Digite um valor: ");
            scanf("%d", &vetor[i]);
            for (j = 0; j < i; j++)
            {
                if (vetor[i] == vetor[j])
                {
                    k = 1;
                    printf("Valor digitado eh igual a algum anterior\n");
                }
                else
                {
                    k = 0;
                }
            }
        } while (k == 1);
    }

    printf("Vetor final: | ");

    for (i = 0; i < 10; i++)
    {
        printf("%d | ", vetor[i]);
    }

    return 0;
}