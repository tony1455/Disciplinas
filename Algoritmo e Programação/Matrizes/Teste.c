#include <stdio.h>

int main(void)
{
    float notas[5][2];
    int i,j;

    for(i=0; i<5; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("Informe a Nota %d do aluno %d: ",j+1, i+1);
            scanf("%f", &notas[i][j]);
        }
    }
    printf("\n==== MATRIZ ====\n");
    printf("\tNOTA1\tNOTA2\n");
    for(i=0; i<5; i++)
    {
        printf("Aluno %d\t", i+1);
        for(j=0; j<2; j++)
        {
            printf("%.1f\t", notas[i][j]);
        }
        printf("\n");
    }

    return 0;
}
