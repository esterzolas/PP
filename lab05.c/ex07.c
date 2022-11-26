/*7. Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em
graus Fahrenheit. A fórmula de conversão é: 𝐹 = 𝐶 ∗ (9,0 / 5,0) + 32,0, sendo F a temperatura
em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

float ConversaoCparaF(float celsius);

int main()
{

    float celsius;
    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    printf("\n%0.0f graus Celsius equivale a %0.2f graus Fahreinheit", celsius, ConversaoCparaF(celsius));

    return 0;
    
}

float ConversaoCparaF(float celsius)
{

    float fahreinheit;
    fahreinheit = celsius * (9.0 / 5.0) + 32.0;

    return fahreinheit;

}