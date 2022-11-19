/*15. Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada
de dados com um valor negativo ou zero.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    while (valor > 0)
    {
        printf("O quadrado de %d eh %d\n", valor, valor * valor);
        printf("O cubo de %d eh %d\n", valor, valor * valor * valor);
        printf("A raiz quadrada de %d eh %0.2f\n", valor, sqrt(valor));
        printf("Digite um valor: ");
        scanf("%d", &valor);
    }

    return 0;
}