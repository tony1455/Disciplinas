/*Escreva um programa que realize a multiplica ̧c ̃ao de dois n ́umeros inteiros
informados pelo usu ́ario atrav ́es de somas sucessivas, ou seja, para fazer A X B basta somar o valor da
vari ́avel A, B vezes*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,resul=0;

    scanf("%d", &a);
    scanf("%d", &b);

    for(i=1;i<=b;i++)
    {
        printf("%d", a);
        if(i != b)
        {
            printf(" + ");
        }
        resul+=a;
    }
    printf(" = %d\n", resul);


    return 0;
}


