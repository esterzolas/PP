/* 44.Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo
a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo. */


#include<stdio.h>
int main (){
    float altura_degrau, altura_final, quantidade_degraus;
    printf ("Digite a altura que deseja alcancar: \n");
    scanf ("%f", &altura_final);
    printf ("Digite a altura de cada degrau: ");
    scanf ("%f", &altura_degrau);
    quantidade_degraus = altura_final / altura_degrau;
    printf ("A quantidade de degraus que o usuario deve subir eh igual a: %0.2f", quantidade_degraus);
    return 0;
}