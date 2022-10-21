/*46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere
outro número formado pelos dígitos invertidos do número lido. Exemplo:
numero_lido = 123
numero_gerado = 321*/


#include<stdio.h>
int main (){
    int num, centena, dezena, unidade;
    printf ("Digite um numero inteiro de tres digitos: ");
    scanf ("%d", &num);
    centena = num / 100; // Dividiu o numero digitado pelo usuario por 100 e por ser um numero inteiro, ignorou as casas decimais do resultado da conta e guardou apenas a parte inteira. 
    dezena = num % 100; // A parte decimal antes ignorada da conta acima sera guardada na variavel "dezena" (o operador % guarda a parte decimal do resultado das divisoes).
    unidade = dezena % 10; // Agora a variavel unidade ira receber o valor decimal da divisao acima, que eh a unidade do valor digitado.
    dezena = dezena / 10; // A dezena agora esta guardando a parte decimal, com esta divisao eu excluo a unidade que seria a minha ultima decimal. 
    printf ("Valor invertido: %d %d %d", unidade, dezena, centena);
    return 0;
}