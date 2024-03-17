#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matriz.h"
#define TAM 3
#define LIM 10

int main()
{
    char op;
    int matriz[TAM][TAM],i,j,somaTodos,somaPrincipal,somaSecundaria;
    do
    {
        gerarMatrizInteiros(TAM,TAM,matriz,LIM);
        printf("=== MATRIZ ===\n");
        mostrarMatrizInteiros(TAM,TAM,matriz);

        somaTodos = 0;
        somaPrincipal = 0;
        somaSecundaria = 0;

        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                if(i==j)
                {
                    somaPrincipal = somaPrincipal + matriz[i][j];
                }
                somaTodos = somaTodos + matriz[i][j];
                if(i+j == TAM - 1)
                {
                    somaSecundaria = somaSecundaria + matriz[i][j];
                }
            }
        }
        printf("\nA soma dos elementos da diagonal secundaria: %d", somaSecundaria);
        printf("\nA soma dos elementos da diagonal principal: %d", somaPrincipal);
        printf("\nA soma de todos elementos: %d", somaTodos);

        printf("\n\nDeseja rpetir o programa(S/s)? ");
        setbuf(stdin,NULL);
        scanf("%c", &op);
        system("cls");
    }while(op == 's' || op == 'S');


    return 0;
}
