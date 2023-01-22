/*12. Considere um cadastro de produtos de um estoque, com as seguintes informações para cada produto:
     Código de identificação do produto: representado por um valor inteiro
     Nome do produto: com até 50 caracteres
     Quantidade disponível no estoque: representado por um número inteiro
     Preço de venda: representado por um valor real
a) Defina  uma  estrutura,  denominada  produto,  que  tenha  os  campos  apropriados  para
guardar as informações de um produto;
b) Crie um conjunto de N produtos (N é um valor fornecido pelo usuário) e peca ao usuário
para entrar com as informações de cada produto;
c) Encontre o produto com o maior preço de venda;
d) Encontre o produto com a maior quantidade disponível no estoque.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
     char nome[50];
     float preco;
     int codigo;
     int quant
} produto;

int main()
{
     produto *lista, *MApreco, *MAqnt;
     int i, tam;

     printf("Digite a quantidade total de produtos: ");
     scanf("%d", &tam);
     fflush(stdin);

     lista = (produto *)malloc(sizeof(produto) * tam);

     for (i = 0; i < tam; i++)
     {
          printf("Digite o nome do produto %d: ", i + 1);
          scanf("%s^[\n]", &(lista + i)->nome); // forma de ler string pelo scanf sem pegar o \n
          // fgets((lista + i)->nome, 50, stdin);
          fflush(stdin);
          printf("Digite o preco do produto %d: ", i + 1);
          scanf("%f", &(lista + i)->preco);
          fflush(stdin);
          printf("Digite o codigo do produto %d: ", i + 1);
          scanf("%d", &(lista + i)->codigo);
          fflush(stdin);
          printf("Digite quantidade disponivel no estoque: ", i + 1);
          scanf("%d", &(lista + i)->quant);
          fflush(stdin);
          printf("\n");
     }

     MApreco = lista;
     MAqnt = lista;
     for (i = 1; i < tam; i++)
     {
          if ((lista + i)->preco > MApreco->preco)
          {
               MApreco = lista + i;
          }

          if ((lista + i)->quant > MAqnt->quant)
          {
               MAqnt = lista + i;
          }
     }

     printf("Produto com maior preco:\n|NOME: %s|\n|PRECO: R$%.2f|\n|CODIGO: %-.8d|\n|QUANTIDADE: %-.4d|\n\n"
            "Produto com maior quantidade:\n|NOME: %s|\n|PRECO: R$%.2f|\n|CODIGO: %-.8d|\n|QUANTIDADE: %-.4d|\n",  //testando formatacoes diferentes
            MApreco->nome, MApreco->preco, MApreco->codigo, MApreco->quant, MAqnt->nome, MAqnt->preco, MAqnt->codigo, MAqnt->quant);

     free(lista);

     return 0;
}
