/*43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
- o total a pagar com desconto de 10%;
- o valor de cada parcela, no parcelamento de 3% sem juros;
- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).*/

#include<stdio.h>
int main (){
    float valor_total, desconto_10, valor_parcela, comissao_vista, comissao_parcelada;
    printf ("Digite o valor total a ser pago: ");
    scanf ("%f", &valor_total);
    desconto_10 = valor_total - (valor_total * 0.1);
    printf ("O valor com desconto de 10 por cento eh igual a: %0.2f \n", desconto_10);
    valor_parcela = valor_total / 3;
    printf ("Parcelado em 3 vezes sem juros, o valor eh igual a: %0.2f \n", valor_parcela);
    comissao_vista = desconto_10 + 1.05;
    printf ("A comissao a vista sera igual a: %0.2f \n", comissao_vista);
    comissao_parcelada = valor_total + 1.05;
    printf ("A comissao parcelada sera igual a: %0.2f ", comissao_parcelada);
    return 0;
}