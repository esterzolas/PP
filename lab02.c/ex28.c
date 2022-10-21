/*28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três
valores lidos.*/


#include <stdio.h>
int main (){
    float n1, n2, n3, soma;
    printf ("Digite tres valores: ");
    scanf ("%f %f %f", &n1, &n2, &n3);
    soma = (n1 * n1) + (n2 * n2) + (n3 * n3);
    printf ("A soma dos quadrados destes eh igual a: %f", soma);
    return 0;
    }