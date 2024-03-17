#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    float matriz[2][3][4];
    int i,j,k;

    for(i=0; i<2; i++)
    {
        for(j=0; j<3 ; j++)
        {
            for(k=0; k<4; k++)
            {
                printf("Informe a nota  %d do aluno %d da sala %d: ", k+1,j+1,i+1);
                scanf("%f", &matriz[i][j][k]);
            }
        }
    }
    printf("\n==== MATRIZ ====\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3 ; j++)
        {
            for(k=0; k<4; k++)
            {
               printf("%.1f\t", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }


    return 0;
}
