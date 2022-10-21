/*40. Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda.*/


#include<stdio.h>
int main (){
    float dias, valor_total;
    float salario_dia = 30;
    printf ("Indique quantos dias serao trabalhados: ");
    scanf ("%f", &dias);
    valor_total = salario_dia * dias;
    valor_total = valor_total - (valor_total * 0.08);
    printf ("O salario total eh igual a: %0.2f", valor_total);
    return 0;
}
