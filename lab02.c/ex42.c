/*42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7%
de imposto sobre o salário-base.*/


#include<stdio.h>
int main (){
    float salario_base, gratificacao, imposto, salario_total;
    printf ("Digite o salario base do funcionario: ");
    scanf("%f", &salario_base);
    gratificacao =  salario_base * 1.05;
    imposto = gratificacao - (gratificacao * 0.07);
    salario_total = imposto; // houve um aumento de 5% e um desconto de 7% a partir do salario base e no final o valor foi atribuido ao salario total!
    printf ("O salario com bonus e desconto de imposto eh igual a: %0.2f", salario_total);
    return 0;
}