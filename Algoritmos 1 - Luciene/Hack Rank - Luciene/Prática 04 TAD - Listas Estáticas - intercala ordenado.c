Prática 04: TAD - Listas Estáticas - intercala ordenado

Utilize a TAD fornecida e acrescente a ela a implementação de uma função que intercale duas listas em uma terceira lista de forma ordenada.

// Retorna uma lista resultante da intercalação ordenada de 2 outras listas:

Lista* intercala_ordenado(Lista *l1, Lista *l2);

/* Exemplo:

L1 = {4, 3, 2, 1}

L2 = {9, 8, 7, 6, 5}

  Intercalação ordenada = {1, 2, 3, 4, 5, 6, 7, 8, 9} */

Input Format

Deve ser lido um valor inteiro n que representa a quantidade de elementos de uma lista. Em seguida, devem ser lidos os n elementos da lista. Repetir o processo para ao segunda lista.

Constraints

Devem ser lidos valores inteiros positivos ou negativos.

Output Format

A lista resultante da intercalação ordenada de duas outras duas listas.

Sample Input 0

4
4 3 2 1
5
9 8 7 6 5

Sample Output 0

1 2 3 4 5 6 7 8 9
      
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100 

struct Lista{
    int item[MAX_SIZE];
    int tam; 
};

typedef struct Lista Lista;

Lista* criar_lista(){
    Lista *l = (Lista*) malloc(sizeof(Lista));

    l->tam = 0;

    return l;
}

int lista_vazia(Lista *l){
    return (l == NULL) || (l->tam == 0);
}

int lista_cheia(Lista *l){
    return (l != NULL) && (l->tam == MAX_SIZE);
}

int buscar(Lista *l, int chave){
    int i;

    if (!lista_vazia(l)){
        
        for (i = 0; i < l->tam; i++)
            if (l->item[i] == chave)
                return i;
    }

    return -1;
}

int inserir(Lista *l, int chave){
    
    if (l == NULL)
        l = criar_lista();

    if (!lista_cheia(l)){
        
        l->item[l->tam] = chave;

        
        l->tam++; 

        
        return 1;
    }

    
    return 0;
}

int remover(Lista *l, int chave){
    int i, p = buscar(l, chave);

    
    if (p > -1){
        for (i = p; i < l->tam - 1; i++)
            
            l->item[i] = l->item[i + 1];

        
        l->tam--;

        
        return 1;
    }

    return 0;
}

void imprimir_lista(Lista *l){
    int i;

    if (!lista_vazia(l)){
        for (i = 0; i < l->tam; i++)
            printf("%d ", l->item[i]);

        printf("\n");
    }
}

int liberar_lista(Lista *l){
    if (l != NULL){
        free(l);

        return 1;
    }

    return 0;
}


Lista* concatenar(Lista *l1, Lista *l2){
    Lista *l3 = NULL;
    int i;

    if (l1 == NULL)
        l3 = l2;
    else if (l2 == NULL)
        l3 = l1;
    else if (l1->tam + l2->tam <= MAX_SIZE){
        l3 = criar_lista();

        for (i = 0; i <  l1->tam; i++)
            inserir(l3, l1->item[i]);

        for (i = 0; i <  l2->tam; i++)
            inserir(l3, l2->item[i]);
    }

    return l3;
}


int inserir_ordenado(Lista *l, int chave){
    int i;

    if (l == NULL)
        l = criar_lista();

    if (!lista_cheia(l)){
        
        l->tam++;
        for (i = l->tam - 1; (i > 0) && (chave < l->item[i - 1]); i--)
            l->item[i] = l->item[i - 1];

        l->item[i] = chave;

        return  1;
    }

    return 0;
}
Lista *intercala_ordenada(Lista *l1, Lista *l2){
    
    Lista *l3 = criar_lista();
    
    int i = 0, j = 0;
    
    while(i < l1->tam && j < l2->tam){
        if(l1->item[i] <= l2->item[j]){
            inserir_ordenado(l3, l1->item[i]);
            i++;
        }
        else{
            inserir_ordenado(l3, l2->item[j]);
            j++;
        }
            
    }
    while(i < l1->tam){
        inserir_ordenado(l3, l1->item[i]);
        i++;
    }
    while(j < l2->tam){
        inserir_ordenado(l3, l2->item[j]);
        j++;
    }
    
    return l3;
}
int main(){
    
    int tam1,tam2, chave, chave1;
    scanf("%d", &tam1);
    
    Lista *l1 = criar_lista();
    
    for(int i = 0; i < tam1; i++){
         scanf("%d", &chave);
         inserir(l1,chave);
    }
    
    scanf("%d", &tam2);
    
    Lista *l2 = criar_lista();
    
    for(int i = 0; i < tam2; i++){
         scanf("%d", &chave1);
         inserir(l2,chave1);
    }
    
    Lista *l3 = intercala_ordenada(l1,l2);
    
    imprimir_lista(l3);
        
    liberar_lista(l1);
    liberar_lista(l2);
    liberar_lista(l3);
  
    return 0;
}