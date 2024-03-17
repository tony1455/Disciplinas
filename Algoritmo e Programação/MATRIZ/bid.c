//Imprimir 50 combinacoes de jogos da mega sena
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 50
#define COL 6
#define LIM 60

int main()
{
    int mega[LIN][COL],i,j;
    srand(time(NULL));
    // popular a matriz
    for(i=0;i < LIN; i++)
    {
        for(j=0;j < COL; j++)
        {
            // gera numeros aleatorios entre 1 e 60.
            mega[i][j] = rand() % LIM + 1;
        }
    }
    // imprimir os cartoes.
    for(i=0; i<LIN; i++)
    {
        printf("Cartao %d da mega: ",i+1);
        for(j=0; j<COL;j++)
        {
            printf("%d ",mega[i][j]);
        }
        printf("\n");
    }

    return 0;
}
