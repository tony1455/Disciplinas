#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matriz.h"
#define TAM 5
#define LIM 5

int main()
{
    char op;
    int matriz[TAM][TAM],i,j,linha[TAM],coluna[TAM];
    do
    {
        gerarMatrizInteiros(TAM,TAM,matriz,LIM);
        printf("=== MATRIZ ===\n");
        mostrarMatrizInteiros(TAM,TAM,matriz);

        for(i=0;i<TAM;i++)
        {
            linha[i] = 0;
            coluna[i] = 0;
        }
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                linha[i] = linha[i] + matriz[i][j];
                coluna[j] = coluna[j] + matriz[i][j];
            }
        }
            printf("\n\n=== SOMA DAS LINHAS ===\n");
            mostraVetor(linha,TAM);
            printf("\n=== SOMA DAS COLUNAS ===\n");
            mostraVetor(coluna,TAM);

        printf("\n\nDeseja rpetir o programa(S/s)? ");
        setbuf(stdin,NULL);
        scanf("%c", &op);
        system("cls");
    }while(op == 's' || op == 'S');


    return 0;
}

