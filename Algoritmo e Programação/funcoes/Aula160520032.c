#include <stdio.h>
#include <stdlib.h>

void soma_mais_um(int *n)
{
    *n = *n + 1;
}

int main()
{
    //Exemplo de passagem por referencia
    int x = 5;
    printf("Antes da chamada da funcao: x = %d\n", x);
    soma_mais_um(&x);
    printf("Depois da chamada da funcao: x = %d\n", x);
    return 0;
}
