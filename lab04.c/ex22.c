/*22. Faça um programa que calcule o maior número palíndromo feito a partir do produto de dois 
números de 3 dígitos. Ex.: O maior palíndromo feito a partir do produto de dois números de dois 
dígitos é 9009 = 91*99.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, palindromo, temporaria, cifra, fator_maior1, fator_maior2;
    int num_inverso = 0;
    int quant_digitos = 0;
    int maior_palindromo = 0;

    for (num1 = 999; num1 >= 100; num1--) {
        for (num2 = num1; num2 >= 100; num2--) {
            palindromo = num1 * num2;

            if (palindromo > maior_palindromo) {
                temporaria = palindromo;
                while (temporaria != 0) {
                    quant_digitos++;
                    temporaria /= 10;
                }

                temporaria = palindromo;
                num_inverso = 0;
                while(temporaria != 0) {
                    cifra = temporaria % 10;
                    num_inverso += cifra * pow(10, quant_digitos - 1);
                    temporaria /= 10;
                    quant_digitos--;
                }

                if (palindromo == num_inverso) {
                    maior_palindromo = num_inverso;
                    fator_maior1 = num1;
                    fator_maior2 = num2;
                }
            }
        }
    }

    printf("O maior palindromo eh dado pela multiplicacao de %d x %d = %d\n\n", fator_maior1, fator_maior2, maior_palindromo);


    return 0;
}