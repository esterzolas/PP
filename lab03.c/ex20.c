/*20. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e,
se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes
conceitos:
 O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados;
 Chama-se equilátero o triângulo que tem três lados iguais;
 Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
 Recebe o nome de escaleno o triângulo que tem os três lados diferentes;*/

#include <stdio.h>

int main()
{
    float A, B, C;
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf ("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    if (A < (B + C) && B < (A + C) && C < (A + B))
    {
        if (A == B && A == C && B == C)
        {
            printf("O triangulo eh equilatero.");
        }
        else if (A == B || A == C || B == C)
        {
            printf ("O triangulo eh isosceles. ");
        }
        else if (A != B && A != C && B != C )
        {
            printf ("O trangulo eh escaleno.");
        }
        
    }

    return 0;
}