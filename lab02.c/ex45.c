/*45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII para resolver o problema.*/


#include<stdio.h>
int main (){
    char letra;
    printf ("Digite uma letra maiuscula: ");
    scanf ("%c", &letra);
    letra = letra + 32; // A diferenca de casa decimais eh de 32 (tabela ASCII)!
    printf("A letra minuscula: %c", letra);
    return 0;
}