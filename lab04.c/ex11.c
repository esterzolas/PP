/*11. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.*/

#include <stdio.h>

int main(){
    int num;
    int i;
    printf ("Digite um numero positivo: ");
    scanf ("%d", &num);

    for (i = 0; i < num; i++)
    {
        if (num < 0)
        {
            printf ("Numero invalido!");
            return 0;
        }
        
        printf ("%d\n", i);
    }
    
    return 0;
}