/*05. Leia um número real e imprima a quinta parte deste número.*/

#include <stdio.h>
int main (){
    float num, quintaparte;
    printf ("Digite um numero real: ");
    scanf ("%f", &num);
    quintaparte = num / 5;
    printf ("A quinta parte do numero eh: %0.2f", quintaparte);
    return 0;

}