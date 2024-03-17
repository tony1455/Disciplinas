// ler e imprimir 2 notas para cada aluno de duas turmas. Cada turma tem 2 aunos.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 2
#define COL 2
#define TURMAS 2

int main()
{
    int i,j,k;
    float notas[TURMAS][LIN][COL];
    for(i=0;i<TURMAS; i++)
    {
        for(j=0;j<LIN;j++)
        {
            for(k=0;k<COL;k++)
            {
                printf("Informe a nota %d do aluno %d da turma %d: ",k+1,j+1,i+1);
                scanf("%f", &notas[i][j][k]);
            }
        }
    }
    printf("\n === NOTAS ===\n");
    for(i=0;i<TURMAS; i++)
    {
        printf("Turma %d \n", i+1);
        for(j=0;j<LIN;j++)
        {
            printf("Aluno %d ===> ",j+1);
            for(k=0;k<COL;k++)
            {
                printf(" %.1f", notas[i][j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}
