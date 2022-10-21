/*29. Leia quatro notas, calcule a média aritmética e imprima o resultado.*/


#include <stdio.h>
int main (){
    float n1, n2, n3, n4, media;
    printf ("Digite quatro notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("A media dos quatro numeros eh igual a: %0.2f", media);
    return 0;
}

