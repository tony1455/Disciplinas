/* Gerar uma matriz 10 x 8 com numeros aleatorios entre 1 e 50
    Mostrar Matriz*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "matriz.h"
#define LIN 10
#define LIMITE 50
#define COL 8
int main()
{
    int matriz[LIN][COL];
    char op;
    do
    {
        gerarMatrizInteiros(LIN,COL,LIMITE,matriz);
        printf("\n====== MATRIZ GERADA ======\n");
        mostrarMatrizInteiros(LIN,COL,matriz);
        printf("\n\n");
        gerarMatrizInteiros0alim(LIN,COL,LIMITE+1,matriz);
        printf("\n====== MATRIZ GERADA ======\n");
        mostrarMatrizInteiros(LIN,COL,matriz);

        printf("\n\n Deseja repetir o programa(S/s)? ");
        setbuf(stdin,NULL);
        scanf("%c", &op);
        system("cls");
    }while(op == 'S' || op == 's');

    return 0;
}

