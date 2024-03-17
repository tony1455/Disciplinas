/*Apresentar todos os n ́umeros inteiros entre os limites inferior e superior e com
o passo informados pelo usu ́ario.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, limiSuperior, limInferior, passo;

    scanf("%d", &limInferior);
    scanf("%d", &limiSuperior);
    scanf("%d", &passo);

    for(i=limInferior; i<=limiSuperior; i=i+passo)
    {
        printf("%d ", i);
    }
    return 0;
}
