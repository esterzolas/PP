/*14. A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho
de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
aprovado. Faça todas as verificações necessárias.*/

#include <stdio.h>

int main()
{
    float laboratorio, avaliacao, exame, media;
    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f", &laboratorio);
    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f", &avaliacao);
    printf("Digite a nota do exame final: ");
    scanf("%f", &exame);
    if (laboratorio >= 0 && laboratorio <= 10 && avaliacao >= 0 && avaliacao <= 10 && exame >= 0 && exame <= 10)

    {
        media = ((laboratorio * 2) + (avaliacao * 3) + (exame * 5)) / (2 + 3 + 5);
        printf("Sua media eh: %0.2f", media);
        if (media >= 0 && media <= 2.9)
        {
            printf("REPROVADO!");
        }
        else if (media >= 3 && media <= 4.9)
        {
            printf("VOCE ESTA DE RECUPERACAO!");
        }
        else if (media >= 5 && media <= 10)
        {
            printf("\n APROVADO!");
        }
    }
    else
    {
        printf("NOTA INVALIDO!");
    }

    return 0;
}