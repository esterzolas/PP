/*14. Faça uma função que receba a distância em Km e a quantidade de litros de gasolina
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma
mensagem de acordo com a tabela abaixo:
CONSUMO    (Km/l)    MENSAGEM
menor que    8       Venda o carro!
entre      8 e 14    Econômico!
maior que   14       Super econômico!*/

#include <stdio.h>

float calConsumo (float distancia, float litros, float consumo);

int main()
{
    float distancia, litros, consumo;
    printf("Digite a distancia em Km:\n");
    scanf("%f", &distancia);
    printf("Digite a quantidade de litros de gasolina consumidas:\n");
    scanf("%f", &litros);
    calConsumo(distancia, litros, consumo);

    return 0;
}

float calConsumo(float distancia, float litros, float consumo)
{
    consumo = distancia / litros;
    if (consumo > 0 && consumo < 8)
    {
        printf("Venda o carro!");
    }
    else if (consumo > 8 && consumo < 14)
    {
        printf("Economico!");
    }
    else if (consumo > 14)
    {
        printf("Super economico!");
    }

    return;

}