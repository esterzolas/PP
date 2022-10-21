/*47. Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.*/

#include <stdio.h>

int main(){
    int num, milhar, centena, dezena, unidade;
    printf ("Digite um numero inteiro com quatro digitos: ");
    scanf ("%d", &num); 
    milhar = num / 1000; // Tomando por exemplo o numero 4321 -> Dividiu o numero por 1000 e guardou apenas a parte inteira, ou seja 4
    printf ("%d \n", milhar);
    centena = num / 100; // Dividiu o numero por 100 guardou a parte inteira em centena, ou seja 43
    centena = centena % 10; // A centena que antes guardava 43 foi dividida por 10 e guardou apenas a parte decimal, ou seja 3 (devido o sinal % -> operador de resto)
    printf ("%d \n", centena);
    dezena = num / 10; // Dividiu o numero por 10 guardou a parte inteira em dezena, ou seja 432
    dezena = dezena % 10; // A dezena que antes guardava 432 foi dividida por 10 e guardou apenas a parte decimal, ou seja 2 (devido o sinal % -> operador de resto)
    printf ("%d \n", dezena); 
    unidade = num % 10; // Dividiu o numero por 10 e guardou apenas a parte decimal, ou seja 1 (devido o sinal % -> operador de resto)
    printf ("%d", unidade);
    return 0;
}