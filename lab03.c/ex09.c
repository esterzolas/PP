/*9. Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
“Empréstimo concedido”*/

#include <stdio.h>

int main()
{
    float salario, valor_prestacao;
    printf("Digite um salario: ");
    scanf("%f", &salario);
    printf("Agora digite o valor da prestacao: ");
    scanf("%f", &valor_prestacao);
    if (valor_prestacao > (salario * 0.2))
    {
        printf("Emprestimo nao concedido!");
    }
    else
    {
        printf("Emprestimo concedido!");
    }

    return 0;
}