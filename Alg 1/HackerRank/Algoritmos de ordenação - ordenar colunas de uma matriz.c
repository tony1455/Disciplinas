Implemente uma função que receba uma matriz de números reais. A função deverá ordenar, em ordem decrescente, cada coluna da matriz.

Input Format

Na primeira linha, devem ser lidos dois números inteiros: l (linhas) e c (colunas).

Para cada uma das l linhas seguintes devem ser lidos c números inteiros.

Constraints

.

Output Format

Imprimir a matriz com as colunas ordenadas.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ordena_coluna_e_matriz(int l, int c, float matriz[][c]){
    for(int coluna = 0; coluna < c; coluna++){

        for(int i = 0; i < l; i++){

            for(int j = i + 1; j < l; j++){

                if(matriz[j][coluna] > matriz[i][coluna]){

                    float aux = matriz[i][coluna];
                    matriz[i][coluna] = matriz[j][coluna];
                    matriz[j][coluna] = aux;
                }
            }
        }
    }
}

int main() {
    int linhas, colunas;

    scanf("%d %d", &linhas, &colunas);

    float matriz[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    ordena_coluna_e_matriz(linhas, colunas, matriz);

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

