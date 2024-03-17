/*presentar todos os n ́umeros inteiros entre 1 e o limite superior informado
pelo usu ́ario*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;

    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
