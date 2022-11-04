/*33. Um produto vai sofrer aumento de acordo com a tabela abaixo. Leia o preço antigo, calcule
e escreva o preço novo, e escreva uma mensagem em função do preço novo (de acordo com a
segunda tabela).*/

#include <stdio.h>

int main()
{
    float preco_antigo, preco_novo;
    printf("Digite o preco antigo: ");
    scanf("%f", &preco_antigo);

    if (preco_antigo <= 50)
    {
        preco_novo = preco_antigo * 1.05;
    }
    else if (preco_antigo > 50 && preco_antigo < 100)
    {
        preco_novo = preco_antigo * 1.10;
    }
    else if (preco_antigo > 100)
    {
        preco_novo = preco_antigo * 1.15;
    }
    if (preco_novo <= 80)
    {
        printf("Barato");
    }
    else if (preco_novo > 80 && preco_novo < 120)
    {
        printf("Normal");
    }
    else if (preco_novo > 120 && preco_novo < 200)
    {
        printf("Caro");
    }
    else if (preco_novo > 200)
    {
        printf("Muito caro");
    }

    return 0;
}
