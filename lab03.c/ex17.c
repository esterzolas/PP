/*17. Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
𝐴 =(basemaior + basemenor) ∗ altura / 2
Lembre-se a base maior e a base menor devem ser números maiores que zero.*/

#include <stdio.h>

int main(){
    float base_maior, base_menor, altura, area;
    printf ("Digite a base maior do trapezio: ");
    scanf ("%f", &base_maior);
    printf ("Digite a base menor do trapezio: ");
    scanf ("%f", &base_menor);
    printf ("Digite a altura do trapezio: ");
    scanf ("%f", &altura);
    if ( base_maior > 0 && base_menor > 0)
    {
        area = (base_maior + base_menor) * altura / 2;
        printf ("A area do trapezio eh: %0.2f", area);
    }
    
    return 0;
}