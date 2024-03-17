#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Exemplo de passagem de valor
    int x = 5;
    printf("Antes da chamada da funcao: x = %d\n", x);
    printf("Digite um numero: ");
    scanf("%d", &x);
     //x = soma_mais_um(x);
    printf("Depois da chamada da funcao: x = %d\n", x);
    return 0;
}

