/*13. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo
representará a operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá
ser realizada uma adição, se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’
será efetuada uma divisão.*/

#include <stdio.h>

float calcular(float num1, float num2, char simbolo);

int main()
{
    float num1, num2;
    char simbolo;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &num1, &num2);
    printf("Digite o simbolo que representa a operacao que deseja efetuar: ");
    scanf(" %c", &simbolo);
    printf("Resultado: %0.2f", calcular(num1, num2, simbolo));

    return 0;
}

float calcular(float num1, float num2, char simbolo)
{

    switch (simbolo)
    {
    case '+':
        return num1 + num2;
        break;
    case '-':
        return num1 - num2;
        break;
    case '*':
        return num1 * num2;
        break;
    case '/':
        return num1 / num2;
        break;
    default:
        return printf("Simbolo invalido!");
        break;
    }
}
