/*50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua
idade e do ano atual.*/

#include <stdio.h>

int main(){
    float ano_nascimento, idade;
    float ano_atual = 2022;
    printf ("Sua idade: ");
    scanf ("%f", &idade);
    ano_nascimento = ano_atual - idade;
    printf ("Ano de Nascimento: %2.0f", ano_nascimento);
    return 0;
}