/*40. O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do
distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica,
de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.*/

#include <stdio.h>

int main()
{
    float custo_fabrica = 0;
    float custo_consumidor = 0;
    float comissao = 0;
    float impostos = 0;
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 12000)
    {
        comissao = custo_fabrica * 0.05;
        impostos = 0;
        custo_consumidor = custo_fabrica + comissao + impostos;
        printf("O custo ao consumidor do carro e: %.2f", custo_consumidor);
    }
    else if (custo_fabrica > 12000 && custo_fabrica <= 25000)
    {
        comissao = custo_fabrica * 0.10;
        impostos = custo_fabrica * 0.15;
        custo_consumidor = custo_fabrica + comissao + impostos;
        printf("O custo ao consumidor do carro e: %.2f", custo_consumidor);
    }
    else if (custo_fabrica > 25000)
    {
        comissao = custo_fabrica * 0.15;
        impostos = custo_fabrica * 0.20;
        custo_consumidor = custo_fabrica + comissao + impostos;
        printf("O custo ao consumidor do carro e: %.2f", custo_consumidor);
    }
    return 0;
}