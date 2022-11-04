/*22. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são
 Ter pelo menos 65 anos;
 Ou ter trabalhado pelo menos 30 anos;
 Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

 #include <stdio.h>

int main(){
    float idade, tempo_servico;
    printf ("Digite sua idade: ");
    scanf ("%f", &idade);
    printf ("Digite quantos anos tem de servico: ");
    scanf ("%f", &tempo_servico);
    if (idade >= 65 || tempo_servico >= 30)
    {
        printf ("Voce pode se aposentar!");
    } else if (idade >= 60 && tempo_servico >= 25 )
    {
        printf ("Voce pode se aposentar!");
    } else {
        printf ("Voce nao pode se aposentar. :(");
    }
    
    return 0;
}