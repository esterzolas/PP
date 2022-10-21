/*52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do
prêmio com base no valor investido.*/


#include <stdio.h>

int main(){
    float investimento1, investimento2, investimento3, premio, ganho1, ganho2, ganho3;
    printf("Digite o valor investido pelo primeiro apostador: ");
    scanf("%f", &investimento1);
    printf("Digite o valor investido pelo segundo apostador: ");
    scanf("%f", &investimento2);
    printf("Digite o valor investido pelo terceiro apostador: ");
    scanf("%f", &investimento3);
    printf("Digite o valor do premio: ");
    scanf("%f", &premio);
    ganho1 = premio * (investimento1 / (investimento1 + investimento2 + investimento3));
    ganho2 = premio * (investimento2 / (investimento1 + investimento2 + investimento3));
    ganho3 = premio * (investimento3 / (investimento1 + investimento2 + investimento3));
    printf("O primeiro apostador ganhou: %0.2f\n", ganho1);
    printf("O segundo apostador ganhou: %0.2f\n", ganho2);
    printf("O terceiro apostador ganhou: %0.2f\n", ganho3);
    return 0;
}