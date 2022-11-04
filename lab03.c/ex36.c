/*36. Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga
ao vendedor. Para calcular a comissão, considere a tabela abaixo:*/

#include <stdio.h>

int main(){
    float venda, comissao;
    printf("Digite o valor da venda: ");
    scanf("%f", &venda);
    
    if(venda >= 100000){
        comissao = 700 + venda * 1.16;
    }
    else if(venda >= 80000){ 
        comissao = 650 + venda * 1.14;
    }
    else if(venda >= 60000){
        comissao = 600 + venda * 1.14;
    }
    else if(venda >= 40000){
        comissao = 550 + venda * 1.14;
    }
    else if(venda >= 20000){
        comissao = 500 + venda * 1.14;
    }
    else{
        comissao = 400 + venda  * 1.14;
    }
    printf("Comissao pela venda: %0.2f", comissao);
    return 0;
}