/*13. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e
indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos.*/

#include <stdio.h>

int main(){
    float prova1, prova2, prova3, media;
    printf ("Digite a nota da primeira prova: ");
    scanf ("%f", &prova1);
    printf ("Digite a nota da segunda prova: ");
    scanf ("%f", &prova2);
    printf ("Digite a nota da terceira prova: ");
    scanf ("%f", &prova3);
    media = (prova1 + prova2 + (prova3 * 2)) / (1 + 1 + 2);
    printf ("Sua media eh de: %0.2f", media);
    if ( media > 60 )
    {
        printf ("\n APROVADO");
    } else {
        printf ("\n REPROVADO");
    }

    return 0;
}