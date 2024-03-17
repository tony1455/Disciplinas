#include <stdio.h>

int main(void)
{
    int matriz[50][6], i, j;

    srand(time(NULL));

    for(i=0; i<50; i++)
    {
        for(j=0; j<6; j++)
        {
            matriz[i][j] = rand()%60 + 1;
        }
    }
    printf("\n==== MATRIZ ====\n");
     for(i=0; i<50; i++)
    {
        printf("Jogo %2d: ", i+1);
        for(j=0; j<6; j++)
        {
            printf("\t%2d  ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
