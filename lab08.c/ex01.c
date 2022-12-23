/*1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme solicitado abaixo:
- Horário: composto de hora, minutos e segundos.
- Data: composto de dia, mês e ano.
- Compromisso: composto de uma data, horário e texto que descreve o compromisso. */

#include <stdio.h>
#include <string.h>

struct horario
{
    int hora;
    int minuto;
    int segundos;
};

typedef struct horario horario;

struct data
{
    dia;
    mes;
    ano;
};

typedef struct data data;

struct compromisso
{
    data data_compromisso;
    horario horario_compromisso;
    char descricao[100];
};
