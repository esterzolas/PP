/*15. Crie um programa que receba três valores (obrigatoriamente maiores que zero),
representando as medidas dos três lados de um triângulo. Elabore funções para:
a) Determinar se eles lados formam um triângulo, sabendo que:
 *O comprimento de cada lado de um triângulo é menor do que a soma dos outros
dois lados.
b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo
que:
 *Chama-se equilátero o triângulo que tem três lados iguais;
 *Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
 *Recebe o nome de escaleno o triângulo que tem os três lados diferentes.*/

#include <stdio.h>

float Triangulo(float lado1, float lado2, float lado3);
float tipoTriangulo(float lado1, float lado2, float lado3);

int main()
{
    int tipo;
    float lado1, lado2, lado3;
    printf("Digite os tres lados do triangulo:\n");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (lado1 < 0 && lado2 < 0 && lado3 < 0)
    {
        printf("Numeros invalidos!");
    }

    tipo = Triangulo(lado1, lado2, lado3);
    if (tipo == 0)
    {
        printf("Nao eh um triangulo!");
    }
    else if (tipo == 1)
    {
        tipoTriangulo(lado1, lado2, lado3);
    }

    return 0;
}

float Triangulo(float lado1, float lado2, float lado3)
{
    if (lado1 < (lado2 + lado3) && lado2 < (lado1 + lado3) && lado3 < (lado1 + lado2))
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

float tipoTriangulo(float lado1, float lado2, float lado3)
{
    if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3)
    {
        printf("O triangulo eh equilatero.");
    }
    else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
    {
        printf("O triangulo eh isosceles. ");
    }
    else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
    {
        printf("O trangulo eh escaleno.");
    }
}