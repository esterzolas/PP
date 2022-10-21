/*41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor
calculado.*/


#include<stdio.h>
int main (){
    float reais_hora, horas_trabalhadas, salario;
    printf ("Indique as horas trabalhadas no mes: ");
    scanf ("%f", &horas_trabalhadas);
    printf ("Indique o valor cobrado por hora: ");
    scanf ("%f", &reais_hora);
    salario = horas_trabalhadas * reais_hora; 
    salario = salario + (salario * 0.1);
    printf ("O salario total eh igual a: %0.2f", salario);
    return 0;
}