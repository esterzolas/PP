/*2. Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido. */

#include <stdio.h>
#include <math.h>

int main()
{
    float numero, raiz;
    printf("Digite um numero: ");
    scanf("%f", &numero);

    if(numero > 0){
            raiz = sqrt(numero);
    printf(" O numero eh positivo e a raiz quadrada eh: %0.2f", raiz);
    }
    else
        printf("Este numero eh invalido! ");

     return 0;
}
