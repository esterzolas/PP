/*10. Faça uma função que receba dois números e retorne qual deles é o maior.*/

#include <stdio.h>

float maior(float num1, float num2);

int main()
{

    float num1, num2;
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    if (maior(num1, num2) == 1)
    {
        printf("O maior numero eh %0.2f", num1);
    }
    else if (maior(num1, num2) == 0)
    {
        printf("O maior numero eh %0.2f", num2);
    }
    else if (maior(num1, num2) == -1)
    {
        printf("Os numeros sao iguais!");
    }

    return 0;
}

float maior(float num1, float num2)
{
    if (num1 > num2)
    {
        return 1;
    }
    else if (num1 < num2)
    {
        return 0;
    }

    return -1;
}
