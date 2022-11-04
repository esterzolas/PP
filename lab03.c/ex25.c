/*25. Calcule as raízes da equação de 2º grau.
A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é
equação de segundo grau”.
 Se delta < 0, não existe real. Imprima a mensagem “Não existe raiz”.
 Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
 Se delta 0, imprima as duas raízes reais.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, raiz, raiz2;
    printf("Digite os valor de a: ");
    scanf("%f", &a);
    printf("Digite os valor de b: ");
    scanf("%f", &b);
    printf("Digite os valor de c: ");
    scanf("%f", &c);

    if (a != 0)
    {
        delta = (b * b) - (4 * a * c);
        if (delta < 0)
        {
            printf("Nao existe raiz");
        }
        else if (delta == 0)
        {
            raiz = -b / (2 * a);
            printf("Raiz unica %0.2f", raiz);
        }
        else if (delta >= 0)
        {
            raiz = (-b - sqrt(delta)) / (2 * a);
            raiz2 = (-b + sqrt(delta)) / (2 * a);
            printf("As raizes sao: %0.2f e %0.2f", raiz, raiz2);
        }
    }
    else
    {
        printf("Nao eh equacao de segundo grau.");
    }

    return 0;
}