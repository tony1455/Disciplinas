#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matriz.h"
#define TAM 3
#define LIM 19

int main()
{
    char op;
    int matriz[TAM][TAM],i,j,contNeg;
    do
    {
        gerarMatrizNegativo(TAM,TAM,matriz,LIM);
        printf("=== MATRIZ ===\n");
        mostrarMatrizInteiros(TAM,TAM,matriz);
        contNeg=0;
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                if(matriz[i][j] < 0)
                {
                    contNeg = contNeg + 1;
                }
            }
        }
        printf("\n");
        printf("Quantidade de numeros negativos = %d\n", contNeg);

        printf("\n\nDeseja rpetir o programa(S/s)? ");
        setbuf(stdin,NULL);
        scanf("%c", &op);
        system("cls");
    }while(op == 's' || op == 'S');


    return 0;
}


