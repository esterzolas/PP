/*11. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a
letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá
calcular a média ponderada, com pesos 5, 3 e 2.*/

#include <stdio.h>

float media(float nota1, float nota2, float nota3, char letra);

int main()
{
    float resultado, nota1, nota2, nota3;
    char letra;
    printf("Entre com as 3 notas do aluno:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("Digite A para calcular media aritmetica e P para calcular a media ponderada\n");
    scanf(" %c", &letra);
    resultado = media(nota1, nota2, nota3, letra);
    printf("Resultado: %0.2f", resultado);
}

float media(float nota1, float nota2, float nota3, char letra)
{
    float resultado;

    if (letra == 'A' || letra == 'a')
    {
        resultado = (nota1 + nota2 + nota3) / 3;
    }
    else if (letra == 'P' || letra == 'p')
    {
        resultado = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2))/ (5 + 3 + 2);
    }

    return resultado;

}
