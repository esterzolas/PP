/*8. Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação:
hipotenusa = √𝑎2 + 𝑏2. Faça uma função que receba os valores de a e b e calcule o valor
da hipotenusa através da equação.*/

#include <stdio.h>
#include <math.h>

float hipotenusa(float a, float b);

int main()
{

    float catetoA, catetoB;
    printf("Entre com os catetos do triangulo:\n");
    scanf("%f %f", &catetoA, &catetoB);
    printf("A hipotenusa eh: %0.2f", hipotenusa(catetoA, catetoB));

    return 0;
}

float hipotenusa(float catetoA, float catetoB)
{
    float resultado;
    resultado = sqrt((catetoA * catetoA) + (catetoB * catetoB));

    return resultado;

}