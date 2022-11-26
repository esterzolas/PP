/*18. Faça uma função que receba por parâmetro dois valores inteiros x e z. Calcule e retorne o 
resultado de x elevado a z para o programa principal. Atenção não utilize nenhuma função pronta de 
exponenciação.*/

#include <stdio.h>

int potencia (int x, int z);

int main()
{
    int x, z;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &x, &z);
    printf("A potencia eh: %d", potencia(x, z));

    return 0;
}

int potencia (int x, int z)
{
    int i;
    int potencia = 1;
    for (i = 0; i < z; i++)
    {
        potencia *= x;
    }
    return potencia;
}