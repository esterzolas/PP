/*30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em
dólares.*/

#include <stdio.h>
int main (){
    float real, dol, cot;
    printf ("Digite um valor em reais: ");
    scanf("%f", &real);
    printf ("Digite a cotacao do dolar: ");
    scanf ("%f", &cot);
    dol = real / cot;
    printf("O valor convertido ficou em: %0.2f", dol);
    return 0;
}
