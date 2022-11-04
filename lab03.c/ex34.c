/*34. Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela
abaixo, quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.*/

#include <stdio.h>

int main()
{
    float nota;
    int faltas;
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);
    if (nota >= 9 && nota <= 10)
    {
        if (faltas <= 20) 
        {
            printf("Conceito A");
        }
        else
        {
            printf("Conceito B");
        }
    }
    else if (nota >= 7.5 && nota <= 8.9) // nao esquece de colocar else
    {
        if (faltas <= 20)
        {
            printf("Conceito B");
        }
        else
        {
            printf("Conceito C");
        }
    }
    else if (nota >= 5 && nota <= 7.4) // bom habito de programacao
    {
        if (faltas <= 20)
        {
            printf("Conceito C");
        }
        else
        {
            printf("Conceito D");
        }
    }
    else if (nota >= 4 && nota <= 4.9)
    {
        if (faltas <= 20)
        {
            printf("Conceito D");
        }
        else
        {
            printf("Conceito E");
        }
    }
    else if (nota >= 0 && nota <= 3.9)
    {
        printf("Conceito E");
    }
    else
    {
        printf("Nota invalida");
    }
    return 0;
}
