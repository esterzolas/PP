/*15. Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da
semana correspondente a este número. Isto é, domingo se 1, segunda-feira se 2, e assim por
diante.*/

#include <stdio.h>

int main(){
    int num;
    printf ("Digite um numero de 1 a 7: ");
    scanf ("%d", &num);
    switch (num)
    {
    case 1:
        printf ("DOMINGO");
        break;
    case 2: 
        printf ("SEGUNDA-FEIRA");
        break;
    case 3: 
        printf ("TERCA-FEIRA");
        break;
    case 4:
        printf ("QUARTA-FEIRA");
        break;
    case 5:
        printf ("QUINTA-FEIRA");
        break;
    case 6:
        printf ("SEXTA-FEIRA");
        break;
    case 7:
        printf ("SABADO");
        break;
    default: 
        printf ("NUMERO INVALIDO");
        break;
    }
    return 0;
}