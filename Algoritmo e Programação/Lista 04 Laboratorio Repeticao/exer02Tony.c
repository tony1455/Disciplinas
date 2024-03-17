/*Apresentar todos os n ́umeros inteiros entre os limites inferior e superior infor-
mados pelo usu ́ario*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limiSuperior, limiInferior,i;

    scanf("%d", &limiInferior);
    scanf("%d", &limiSuperior);

    for(i=limiInferior;i<=limiSuperior;i++)
    {
        printf("%d ", i);
    }

    return 0;
}
