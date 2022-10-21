/*31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.*/


#include <stdio.h>
int main (){
    int ant, suc, num;
    printf ("Digite um numero inteiro: ");
    scanf ("%d", &num);
    ant = num - 1;
    suc = num + 1;
    printf ("O antecessor eh igual a %d e o sucessor eh igual a %d", ant, suc);
    return 0;
}
