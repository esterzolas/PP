/*38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele
recebeu um aumento de 25%.*/


#include<stdio.h>
int main (){
    float salario_atual, salario_final;
    printf ("Digite o salario atual: ");
    scanf ("%f", &salario_atual);
    salario_final = salario_atual * 1.25;
    printf ("O salario final do funcionario eh igual a: %0.2f", salario_final);
    return 0;
}