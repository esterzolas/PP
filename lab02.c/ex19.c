/*19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A
fórmula de conversão é: M = L /1000, sendo L o volume em litros e M o volume em metros
cúbicos.*/


#include <stdio.h>
int main(){
    float l, m;
    printf ("Digite um volume em litros: ");
    scanf ("%f", &l);
    m = l/1000;
    printf ("O valor em metros cubicos eh igual: %0.2f", m);
    return 0;
}