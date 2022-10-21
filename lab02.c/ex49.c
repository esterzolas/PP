/*49. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
minuto e segundo) do termino da mesma.*/

#include <stdio.h>

int main(){
    int seg_inicial, min_inicial, hora_inicial, seg_final, min_final, hora_final, duracao;
    printf ("Digite a hora que o experimento comecou: ");
    scanf  ("%d", &hora_inicial);
    printf ("Agora digite os minutos: ");
    scanf  ("%d", &min_inicial);
    printf ("Digite agora os segundos: ");
    scanf  ("%d", &seg_inicial);
    printf ("Por fim, digite em segundos, quanto tempo o experimentou durou: ");
    scanf ("%d", &duracao);
     //situacao em que so os segundos são interferidos
    seg_final = seg_inicial + duracao;
    min_final = min_inicial;
    hora_final = hora_inicial;
    //limite de segundos para situações em que há mais de um minuto na duração (alteracao em segundos e minutos)
    while (seg_final > 59)
    {
        min_final++;
        seg_final -= 60;
        hora_final = hora_inicial;
        }
    //situacao em que tenha alteração nas horas (alteracao em horas, minutos e segundos)
    if (min_final>59)
    {
    hora_final = hora_inicial + 1;
    min_final -= 60;    
    }
    printf ("Fim do experimento!!! \n Hora Inicial: %d:%d:%d \n Hora Final: %d:%d:%d ", hora_inicial, min_inicial, seg_inicial, hora_final, min_final, seg_final);
    return 0;
}
