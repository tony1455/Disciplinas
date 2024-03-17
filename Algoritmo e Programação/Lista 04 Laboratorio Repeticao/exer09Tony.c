/*Dados dois n ́umeros A e B, fa ̧ca um programa que calcule a soma de todos os
inteiros existentes entre A e B. No caso de A > B, fa ̧ca a troca dos valores para fazer A < B antes
de realizar o processamento.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,resul=0, aux, i;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a>b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    for(i=a; i<=b; i++)
    {
        printf("%d", i);
        if(i != b)
        {
          printf(" + ");
        }
        resul+=i;
    }
    printf(" = %d\n", resul);

    return 0;
}

