#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matriz.h"
#define TAM 6
#define LIM 100

int main()
{
    char op;
    int matriz[TAM][TAM],i,j,maior,linhaMaior,colunaMaior;
    do
    {
        gerarMatrizInteiros(TAM,TAM,matriz,LIM);
        printf("=== MATRIZ ===\n");
        mostrarMatrizInteiros(TAM,TAM,matriz);

        maior = matriz[0][0];
        linhaMaior = 0;
        colunaMaior = 0;

        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                if(matriz[i][j] > maior)
                {
                    maior = matriz[i][j];
                    linhaMaior = i;
                    colunaMaior = j;
                }
            }
        }
        printf("\nO maior elemento eh %d e esta na coluna %d da linha %d", maior,colunaMaior+1,linhaMaior+1);

        printf("\n\nDeseja rpetir o programa(S/s)? ");
        setbuf(stdin,NULL);
        scanf("%c", &op);
        system("cls");
    }while(op == 's' || op == 'S');


    return 0;
}

