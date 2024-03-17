/*Apresentar os quadrados dos n ́umeros inteiros entre os limites inferior e superior
informados pelo usu ́ario*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, limInferior, limSuperior;

    scanf("%d", &limInferior);
    scanf("%d", &limSuperior);
    for(i=limInferior;i<=limSuperior;i++)
    {
        printf("%d x %d = %d\n", i,i,(i*i));
    }

    return 0;
}

