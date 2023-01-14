/*25.  Faça um programa que possua uma função para:
 ler  2  notas  e  retorná-las  por  parâmetro  (chamar  uma  função  dedicada  a  ler  2  notas
válidas e que devolver os 2 números lidos);
 calcular  a  média  simples  e  a  média  ponderada  e  retorná-las  por  parâmetro,  onde  a
segunda nota tem peso 2: media_ponderada = (n1 + n2*2)/3 */

#include <stdio.h>

void validar(float *nota1, float *nota2);

void media(float *nota1, float *nota2, float *simples, float *ponderada);

int main()
{
    int i;
    float nota1, nota2, simples, ponderada;

    validar(&nota1, &nota2);

    media(&nota1, &nota2, &simples, &ponderada);

    printf("Media simples: %0.2f\nMedia ponderada: %0.2f\n", simples, ponderada);

    return 0;
}

void validar(float *nota1, float *nota2)
{
    printf("Digite NOTA 1: ");
    scanf("%f", &*nota1);

    printf("Digite NOTA 1: ");
    scanf("%f", &*nota2);

    if (*nota1 < 0 || *nota2 < 0 || *nota1 > 100 || *nota2 > 100)
    {
        printf("Nota invalida!");
    }
}

void media(float *nota1, float *nota2, float *simples, float *ponderada)
{
    *simples = (*nota1 + *nota2) / 2;
    *ponderada = (*nota1 + (*nota2 * 2)) / 3;
}