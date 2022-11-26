/*6. Faça uma função que receba 3 números inteiros como parâmetro, representando horas,
minutos e segundos, e os converta em segundos.*/

#include <stdio.h>

int conversao_seg(int horas, int min, int seg);

int main(){

    int horas, min, seg;
    printf ("Digite as horas, minutos e segundos(seprados por enter):\n");
    scanf ("%d %d %d", &horas, &min, &seg);
    printf ("Conversao para segundos: %d", conversao_seg (horas, min, seg));

    return 0;
}

int conversao_seg(int horas, int min, int seg) {

    int hora, minutos, segundos, conversao;
    hora = horas * 3600;
    minutos = min * 60;
    segundos = seg;
    conversao = hora + minutos + segundos;

    return conversao;

}