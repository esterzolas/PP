/*37. As tarifas de certo parque de estacionamento são as seguintes:
 1a e 2a hora - R$1,00 cada;
 3a e 4a hora - R$1,40 cada;
 5a hora e seguintes - R$2,00 cada
O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem
estacionar durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse
permanecido 120 minutos. Os momentos de chegada ao parque e partida deste são
apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par
12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo
teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo
estacionamento. Admite-se que a chegada e a partida se dão com intervalo não superior a 24
horas. Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação
de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.*/

#include <stdio.h>
#include <math.h>
int main(){
    int hora_chegada, minuto_chegada, hora_partida, minuto_partida, tempo_total, tempo_totalMinutos; 
    float tempo_totalHoras, tempo_totalHorasArredondado, preco;
    printf("Digite a hora de chegada: ");
    scanf("%d", &hora_chegada);
    printf("Digite o minuto de chegada: ");
    scanf("%d", &minuto_chegada);
    printf("Digite a hora de partida: ");
    scanf("%d", &hora_partida);
    printf("Digite o minuto de partida: ");
    scanf("%d", &minuto_partida);
    
    tempo_totalMinutos = (hora_partida*60 + minuto_partida) - (hora_chegada*60 + minuto_chegada);
    
    tempo_totalHoras = tempo_totalMinutos/60.0; 
    
    tempo_totalHorasArredondado = ceil(tempo_totalHoras); 
    
    if(tempo_totalHorasArredondado<2){
       
        preco = tempo_totalHorasArredondado*1;
    }
    else if(tempo_totalHorasArredondado == 2){
        
        preco = tempo_totalHorasArredondado*1;
    }
    else if(tempo_totalHorasArredondado == 3){
        
        preco = tempo_totalHorasArredondado*1.4;
    }
    else if(tempo_totalHorasArredondado == 4){
        preco = tempo_totalHorasArredondado*1.4;
    }
    
    else{
        preco = tempo_totalHorasArredondado*2;
    }

    if(hora_chegada==hora_partida && minuto_chegada==minuto_partida){
        printf("Ficou mais de 24h no estacionamento\n");
        preco = 24*2;
    }
    
    printf("O preco a ser pago eh: %.2f", preco);
    
    return 0;
}