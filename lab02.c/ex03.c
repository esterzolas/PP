/*03. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.*/


#include <stdio.h> 
#include <stdlib.h> 
 
int main() 
{ 
    int soma; 
    int n1, n2, n3; 
    printf("Digite um numero inteiro: "); 
    scanf("%d", &n1); 
    printf("Digite o segundo numero inteiro: "); 
    scanf("%d", &n2); 
    printf("Digite o ultimo numero inteiro para soma: "); 
    scanf("%d", &n3); 
    soma = n1 + n2 + n3; 
    printf("O valor dessa soma eh igual a: %d", soma); 
    return 0; 
}