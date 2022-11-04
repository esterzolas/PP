/*3. Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima o número ao quadrado. */

#include <stdio.h>
#include <math.h>

int main()
{

    float numero, raiz, quadrado;
    printf("Digite um numero real aqui: ");
    scanf("%f", &numero);

    if(numero > 0) {
    raiz = sqrt(numero);
    printf("O numero eh positivo e sua raiz quadrada eh: %0.2f", raiz);
    }
    else{
    quadrado = numero*numero;
    printf("O numero eh negativo e seu quadrado eh: %0.2f", quadrado);
    }

     return 0;
}
