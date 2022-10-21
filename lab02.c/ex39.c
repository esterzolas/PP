/* 39. A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo
que da quantia total:
- O primeiro ganhador receberá 46%;
- O segundo receberá 32%;
- O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores. */


#include<stdio.h>
int main (){
    float primeiro, segundo, terceiro;
    float valor_total = 780000.00;
    primeiro = valor_total * 0.46;
    segundo = valor_total * 0.32;
    terceiro = valor_total - (primeiro + segundo);
    printf ("O primeiro ganhador ira receber: %0.2f\n", primeiro);
    printf ("O segundo ganhador ira receber: %0.2f\n", segundo);
    printf ("O terceiro ganhador ira receber: %0.2f\n", terceiro);
    return 0;
}