/*Apresentar todos os valores num ́ericos inteiros pares a partir 2 at ́e o limite
superior informado pelo usu ́ario*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, limiSuperior;


    scanf("%d", &limiSuperior);


    for(i=2; i<=limiSuperior; i++)
    {
       if(i%2==0)
       {
           printf("%d ", i);
       }
    }
    return 0;
}

