/*48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.*/

#include <stdio.h>

int main(){
    int num_seg, horas, minutos, segundos;
    printf ("Digite um valor inteiro em segundos: ");
    scanf ("%d", &num_seg);
    horas = num_seg / 3600; // Numero total de segundos dados pelo usuario dividido por numero de segundos que tem em uma hora.
    printf ("Horas: %d\n", horas);
    minutos = (num_seg / 60) - (horas * 60); // Numero total de segundos dado dividido pelos segundos que tem em um minuto -> limitando a 60 minutos
    printf ("Minutos: %d\n",minutos);
    segundos = num_seg % 60; // Numero total de segundos dividindo por 60 e guardando apenas o resto depois de tirar as horas e minutos.
    printf ("Segundos: %d", segundos);
    return 0;
}