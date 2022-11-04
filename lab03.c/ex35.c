/*35. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e
se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em
anos não bissextos.*/

#include <stdio.h>

int main(){
    int dia, mes, ano;
    printf("Digite o dia, mes e ano respectivamente (separados por enter): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    if(mes >= 1 && mes <= 12){
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){ 
            if(dia >= 1 && dia <= 31){
                printf("Data valida.");
            }
            else{
                printf("Data invalida!");
            }
        }
        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if(dia >= 1 && dia <= 30){
                printf("Data valida.");
            }
            else{
                printf("Data invalida!");
            }
        }
        else if(mes == 2){ 
            if(ano % 4 == 0){ 
                if(dia >= 1 && dia <= 29){
                    printf("Data valida.");
                }
                else{
                    printf("Data invalida!");
                }
            }
            else{   
                if(dia >= 1 && dia <= 28){
                    printf("Data valida.");
                }
                else{
                    printf("Data invalida!");
                }
            }
        }
    }
    else{
        printf("Data invalida!");
    }
    return 0;
}