/*26.  Implemente uma função que calcule as raízes de uma equação do segundo grau do tipo
Ax2+ Bx + C = 0.

A variável a tem que ser diferente de zero.
 Se delta < 0, não existe real;
 Se delta = 0, existe uma raiz real;
 Se delta >= 0, existem duas raízes reais.

Essa função deve obedecer ao seguinte protótipo:

int raizes(float A, float B, float C, float *X1, float *X2);

Essa função deve ter como valor de retorno o número de raízes reais e distintas da equação. Se
existirem raízes reais, seus valores devem ser armazenados nas variáveis apontadas por X1 e X2.*/

#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2);

int main()
{
    float a, b, c, x1, x2, quantR;

    // Calculando raizes de de uma equacao de segundo grau
    printf("Entre com o valor de A: ");
    scanf("%f", &a);
    fflush(stdin);

    if (a != 0)
    {
        printf("\nEntre com o valor de B: ");
        scanf("%f", &b);
        fflush(stdin);

        printf("\nEntre com o valor de C: ");
        scanf("%f", &c);
        fflush(stdin);

        quantR = raizes(a, b, c, &x1, &x2);

        if (quantR == 0)
        {
            printf("\nNao existe raiz: ");
        }
        else if (quantR == 1)
        {
            printf("\nRaiz de %0.2fx^2 + %0.2fx + %0.2f = 0:\nX1 = %0.2f", a, b, c, x1);
        }
        else if (quantR == 2)
        {
            printf("\nRaizes de %0.2fx^2 + %0.2fx + %0.2f = 0:\nX1 = %0.2f\nX2 = %0.2f", a, b, c, x1, x2);
        }
    }
    else
    {
        printf("\nOpcao invalida!");
    }

    return 0;
}

int raizes(float A, float B, float C, float *X1, float *X2)
{
    float delta, quantR;

    delta = (B * B) - (4 * A * C);

    if (delta < 0)
    {
        return quantR = 0;
    }
    else if (delta == 0)
    {
        *X1 = ((-B) + sqrt(delta)) / (2 * A);
        return quantR = 1;
    }
    else if (delta >= 0)
    {
        *X1 = ((-B) + sqrt(delta)) / (2 * A);
        *X2 = ((-B) - sqrt(delta)) / (2 * A);
        return quantR = 2;
    }
}