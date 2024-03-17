#include <stdio.h>
#include <stdlib.h>

void soma_mais_um(int n) //n =x
{
    n = n + 1;
    printf("Dentro da funcao: n = %d \n", n);
    return n;
}

int main()
{
    //Exemplo de passagem de valor
    int x = 5;
    printf("Antes da chamada da funcao: x = %d\n", x);
     x = soma_mais_um(x);
    printf("Depois da chamada da funcao: x = %d\n", x);
    return 0;
}
