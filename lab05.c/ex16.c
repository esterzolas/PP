/*16. Faça uma função chamada desenha_linha. Ele deve desenhar uma linha na tela usando uma
sequência de símbolos de igual (Ex.: ========). A função recebe por parâmetro quantos 
sinais de igual serão mostrados.*/

#include <stdio.h>

desenha_linha (int num, char simbolo);

int main()
{
    int num;
    char simbolo = '=';
    printf("Digite um numero: ");
    scanf("%d", &num);
    desenha_linha(num, simbolo);

    return 0;

}

desenha_linha (int num, char simbolo)
{
    int i;
    for (i = 0; i < num; i++)
    {
        printf("%c", simbolo);
    }
    printf("\n");
}