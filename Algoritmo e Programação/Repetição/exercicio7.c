#include <stdio.h>
#include <math.h>

int main(void)
{
    int i,quadrado;

    printf("=== Divisiveis por 3 ===\n");

    for(i=1;i<=100;i++)
    {
        if(i%3 == 0)
        {
            printf("%d\t", i);

        }
    }
    printf("\n=== Quadrado dos Divisiveis por 3 ===\n");

    for(i=1;i<=100;i++)
    {
        if(i%3 == 0)
        {
            quadrado = i*i;
            printf("%d\t", quadrado);
        }
    }
    printf("\n\n=== Divisiveis por 5 ou 7 ===\n");

    for(i=1;i<=100;i++)
    {
        if(i%5 == 0 || i%7 == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n\n=== Raiz quadrada divisiveis por 5 e por 7 ===\n");

    for(i=1;i<=100;i++)
    {
        if(i%5 == 0 || i%7 == 0)
        {
            printf("%.2f\t", sqrt(i));
        }
    }


    return 0;
}
