/*Apresentar os resultados da tabuada de um n ́umero informado pelo usu ́ario.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num;

    scanf("%d", &num);

    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", num,i,(num*i));
    }
    return 0;
}
