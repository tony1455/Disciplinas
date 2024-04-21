Prática 03: TAD - operações com matriz

Crie um TAD para processamento de matrizes com a seguinte estrutura e operações, onde m é a matriz, l é a quantidade de linhas e c é a quantidade de colunas:

typedef struct{
    int **arr; // Matriz l x c (arranjo bidimensional)
    int l; // quantidade de linhas
    int c; // quantidade de colunas
}Matriz;

Matriz * iniciar(int l, int c);


// A matriz recebe x na posição [i][j]
void alterar(Matriz *m, int x, int i, int j);


// Retorna a linha da matriz na posição i
/*
Exemplo:
arr[][] = {{1, 2, 3, 4},
	   {5, 6, 7, 8},
       {9, 10, 11, 12}
}

Linha na posição 1: {5, 6, 7, 8} 
*/
int *obter_linha(Matriz *m, int i);


// Retorna a coluna da matriz na posição i
/*
Exemplo:
arr[][] = {{1, 2, 3, 4},
	   {5, 6, 7, 8},
       {9, 10, 11, 12}
}
Coluna na posição 2: {3, 7, 11} 
*/
int *obter_coluna(Matriz *m, int i);

// obter sub-matriz
/*
Exemplo:
arr[][] = {{1, 2, 3, 4},
	   {5, 6, 7, 8},
       {9, 10, 11, 12}
}
li = 1, ci = 1, lf = 2, cf = 2

submat = {{6, 7},
	      {10, 11}}

Matriz *obter_submat(Matriz *m, int li, int ci, int lf, int cf);

Input Format

    Na primeira linha, devem ser lidos dois números inteiros (e.g. l e c).
    Em seguida, ler l x c elementos.
    Após, ler dois números inteiros, sendo o primeiro a posição de uma linha (pl) e o segundo, a posição de uma coluna (pc).
    Por fim, ler quatro números inteiros referentes a posição de uma submatriz.

Constraints

Não há.

Output Format

    Na primeira linha, imprimir a linha da posição pl retornada pela função obter_linha.
    Na segunda linha, imprimir '\n'.
    Na terceira linha, imprimir a coluna da posição pc retornada pela função obter_coluna.
    Na quarta linha, imprimir '\n'.
    A partir da quinta linha, imprimir a submatriz.

Sample Input 0

3 4
1  2  3  4
5  6  7  8
9 10 11 12
1 2
1 1 2 2

Sample Output 0

5 6 7 8

3 7 11

 6  7
10 11

#include <stdio.h>
#include<stdlib.h>
typedef struct{
    int **matriz; // Matriz l x c (arranjo bidimensional)
    int l; // quantidade de linhas
    int c; // quantidade de colunas
}Matriz;

Matriz * iniciar(int l, int c){
    
    Matriz *matriz = (Matriz*)malloc(sizeof(Matriz));
    matriz->l = l;
    matriz->c = c;
    
    matriz->matriz = (int**)malloc(sizeof(int*) * l);
    
    for(int i = 0; i < l; i++)
        matriz->matriz[i] = (int*)malloc(sizeof(int) * c);
    
    return matriz;
}


// A matriz recebe x na posição [i][j]
void alterar(Matriz *m, int x, int i, int j){
    if(m != NULL)
        m->matriz[i][j] = x;
}


// Retorna a linha da matriz na posição i
/*
Exemplo:
arr[][] = {{1, 2, 3, 4},
	   {5, 6, 7, 8},
       {9, 10, 11, 12}
}

Linha na posição 1: {5, 6, 7, 8} 
*/
int *obter_linha(Matriz *m, int pLinha){
    if((m != NULL) && (pLinha >= 0) && (pLinha < m->l)){
        
        int *vetor = (int*)malloc(sizeof(int) * m->c);
        
        for(int i = 0; i < m->c; i++)
            vetor[i] = m->matriz[pLinha][i];
            
        return vetor;
    }
    return NULL;
}


// Retorna a coluna da matriz na posição i
/*
Exemplo:
arr[][] = {{1, 2, 3, 4},
	   {5, 6, 7, 8},
       {9, 10, 11, 12}
}
Coluna na posição 2: {3, 7, 11} 
*/
int *obter_coluna(Matriz *m, int pColuna){
    if((m != NULL) && (pColuna >= 0) && (pColuna < m->c)){
        int *vetor = (int*)malloc(sizeof(int) * m->l);
        
        for(int i = 0; i < m->l; i++)
            vetor[i] = m->matriz[i][pColuna];
            
        return vetor;
    }
    return NULL;
}

//obter sub-matriz
/*
Exemplo:
arr[][] = {{1, 2, 3, 4},
	   {5, 6, 7, 8},
       {9, 10, 11, 12}
}
li = 1, ci = 1, lf = 2, cf = 2

submat = {{6, 7},
	      {10, 11}}
*/
Matriz *obter_submat(Matriz *m, int li, int ci, int lf, int cf){
    if((m != NULL) && (m->matriz != NULL) && (li >= 0) && (ci >= 0) && (lf < m->l) && (cf < m->c) && (li < lf) && (ci < cf)){
        
        int submat_l = (lf - li) + 1;
        int submat_c = (cf - ci) + 1;
        Matriz *submat = iniciar(submat_l, submat_c);
        
        if(submat != NULL){
            
            for(int i = 0; i < submat_c; i++){
                for(int j = 0; j < submat_c; j++){
                    submat->matriz[i][j] = m->matriz[li + i][ci + j];
                }
            }
            return submat;
        }
    }
    return NULL;
}
void imprimir_vetor(int *v, int n){
    
    if(v != NULL){
        for(int i = 0; i < n; i++){
            printf("%d ", v[i]);
        }
        printf("\n\n");
    }
}
void imprimir_submat(Matriz *m){
    if((m != NULL) && (m->matriz != NULL)){
        
        for(int i = 0; i < m->l; i++){
            
            for(int j = 0; j < m->c; j++){
                printf("%d ", m->matriz[i][j]);
            }
            printf("\n");
        }
    }
}

int main(){
    int linha, coluna, pcoluna,plinha,lf,li,ci,cf,item;
    
    scanf("%d %d", &linha, &coluna);
    
    Matriz *minhaMatriz = iniciar(linha,coluna);
    
    for(int i = 0; i < linha; i++){
        
        for(int j = 0; j < coluna; j++){
            
            scanf("%d", &item);
            alterar(minhaMatriz, item, i, j);
            
        }
    }
    scanf("%d %d", &plinha, &pcoluna);
    
    scanf("%d %d %d %d", &li, &ci, &lf, &cf);
    
    int *v_linha = obter_linha(minhaMatriz, plinha);
    int *v_coluna = obter_coluna(minhaMatriz, pcoluna);
    Matriz *submat = obter_submat(minhaMatriz, li, ci, lf, cf);
    
    imprimir_vetor(v_linha, coluna);
    imprimir_vetor(v_coluna, linha);
    imprimir_submat(submat);
    
    free(minhaMatriz);
    free(v_linha);
    free(v_coluna);
    free(submat);
    
    return 0;
    
}
