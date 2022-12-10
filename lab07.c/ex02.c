/*2. Faça  um  programa  que  conte  o  número  de 1’s que aparecem  em  uma  stringing.  Exemplo:
“0011001” -> 3*/

#include <stdio.h>
#include <string.h>

int main()
{
  char string[100];
  int i, contador = 0;

  printf("Digite uma sequencia");
  fgets(string, 100, stdin);
  for (i = 0; string[i] != '\0'; i++)
  {
    if (string[i] == '1')
    {
      contador++;
    }
  }
  printf("A string tem %d 1's\n", contador);

  return 0;
}