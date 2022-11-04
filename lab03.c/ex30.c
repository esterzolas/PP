/*30. Faça um programa que receba três números e mostre-os em ordem crescente.*/
#include <stdio.h>

int main()
{
    float x, y, z;
    printf("Digite tres numeros (separados por enter): \n");
    scanf("%f %f %f", &x, &y, &z);

    if(x < y && x < z){
        if(y < z){
            printf("%0.1f < %0.1f < %0.1f", x, y, z);
        }
        else{
            printf("%0.1f < %0.1f < %0.1f", x, z, y);
        }
    }
    else if(y < x && y < z){
        if(x < z){
            printf("%0.1f < %0.1f < %0.1f", y, x, z);
        }
        else{
            printf("%0.1f < %0.1f < %0.1f", y, z, x);
        }
    }
    else if(z < x && z < y){
        if(x < y){
            printf("%0.1f < %0.1f < %0.1f", z, x, y);
        }
        else{
            printf("%0.1f < %0.1f < %0.1f", z, y, x);
        }
    }
    return 0;
}