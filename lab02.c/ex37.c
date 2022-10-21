/*37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
em vista que o desconto foi de 12%.*/


#include<stdio.h>
int main (){
    float num, desconto;
    printf ("Digite o valor do produto: ");
    scanf("%f", &num);
    desconto = num - (num * 0.12);
    printf ("O valor com desconto de 12 por cento eh igual: %0.2f", desconto);
    return 0;
}