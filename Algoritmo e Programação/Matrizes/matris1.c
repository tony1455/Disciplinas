#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"

int main(void)
{
    int linha, coluna, i, j, limite;

    printf("Informe a quantidade de linhas da matrizes: ");
    scanf("%d", &linha);
    printf("Informe a quantidade de colunas da matriz: ");
    scanf("%d", &coluna);
    printf("Informe o liomite para gerar elementos da matriz: ");
    scanf("%d", &limite);

    int matriz[linha][coluna];

    geraMatrizesDe0aLimite(linha, coluna, matriz, limite);
    printf("==== MATRIZ ====\n");
    mostraMatriz(linha, coluna, matriz);

    return 0;
}
