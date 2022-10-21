/*51. Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distância da origem (0, 0).*/


#include <stdio.h>
#include <math.h>

int main(){
    float x, y, distancia;
    printf("Digite as coordenadas x: ");
    scanf("%f", &x);
    printf("Digite as coordenadas y: ");
    scanf("%f", &y);
    distancia = sqrt(x*x + y*y); 
    printf("A distancia da origem eh: %0.2f", distancia);
    return 0;
}