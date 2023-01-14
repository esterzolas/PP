/*16.  Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que
leia  a  variável  ‘a’  e  calcule  e  exiba  o  dobro,  o  triplo  e  o  quádruplo  desse  valor  utilizando
apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e
D o quádruplo.*/

#include <stdio.h>

int main()
{
    int A, *B, **C, ***D, a;

    printf("Digite um valor: ");
    scanf("%d", &a);

    A = a;
    B = &A;
    C = &B;
    D = &C;
    
    printf("\nDobro: %d\nTriplo: %d\nQuadruplo: %d\n", (*B * 2), (**C * 3), (***D * 4));

    return 0;
}