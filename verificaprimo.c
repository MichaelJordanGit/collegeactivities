#include <stdio.h>

int main()
{
    int numero;
    int quantidade;
    int contador;

    printf("Informe um numero: ");
    scanf("%d", &numero);
    quantidade = 0;
    for (contador = 1; contador <= numero; contador++)
    {
        if (numero % contador == 0)
        {
            quantidade++;
        }
    }
     if (quantidade == 2)
        {
            printf("O numero é primo");
        }
        else
        {
            printf("Nao é primo");
        }
        return (0);
}
