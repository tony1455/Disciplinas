#include <stdio.h>

int main(void)
{
    int matriz[3][2] = {{1,2},{3,4},{5,6}}, i,j;

    printf("\n==== MATRIZES =====\n");
    for(i=0; i<3; i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }



    return 0;
}
