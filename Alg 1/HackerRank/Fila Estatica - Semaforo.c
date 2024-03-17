Três estradas movimentadas ligam a uma única rodovia (principal), conforme a figura abaixo. Para o gerenciamento do trânsito, um semáforo foi adicionado para cada estrada, na qual, enquanto o sinal estiver verde, os veículos que chegaram primeiro podem acessar a rodovia principal. Quando o sinal estiver verde para uma estrada, para as outras duas estradas, o sinal será vermelho. No entanto, como as estradas estão cheias de buracos e os veículos devem transitar vagarosamente, para cada vez que o sinal estiver verde para uma estrada, apenas três veículos conseguem acessar a estrada principal antes do sinal ficar vermelho. Por outro lado, os semáforos possuem um sistema inteligente, no qual, enquanto a estrada estiver vazia, o sinal será vermelho. Também, durante o sinal verde, quando a estrada tiver menos que três veículos, assim que os mesmos acessarem a rodovia principal, o sinal ficará vermelho antecipadamente.


Implemente uma função para o gerenciamento do trânsito conforme ilustrado acima. A função deverá receber, como parâmetro, 4 filas estáticas (E1, E2, E3, R). Na função, os elementos de E1, E2 e E3 devem ser transferidos para R de forma que simule o trânsito descrito acima.

Input Format

Em cada uma das 3 primeiras linhas, enquanto -1 não for lido, ler números inteiros e inserí-los em suas respectivas filas (E1, E2 e E3).

Constraints

O acesso aos elementos da fila deve ser através da função desenfileirar.

Output Format

Imprimir a fila R.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define TAM_MAX 10

typedef struct Fila Fila;

struct Fila{
    int item[TAM_MAX];
    int ini;
    int fim;
    int tam;
};


Fila* criar_fila(){
    Fila *f = (Fila*) malloc(sizeof(Fila));

    f->ini = -1;
    f->fim = -1;
    f->tam = 0;

    return f;
}


int fila_cheia(Fila *f){

    if (f == NULL)
        return -1;
    else if (f->tam < TAM_MAX)
        return 0;
    else
        return 1;
}


int fila_vazia(Fila *f){
    if (f == NULL)
        return -1;
    else if (f->tam > 0)
        return 0;
    else
        return 1;
}


int enfileirar(Fila *f, int chave){
    if (f == NULL)
        f = criar_fila();
    
    if (!fila_cheia(f)){
        if (f->ini < 0)
            f->ini = 0;
        
        if (f->fim < TAM_MAX - 1)
            f->fim++;
        else
            f->fim = 0;

        f->item[f->fim] = chave;

        f->tam++;

        return 1;
    }

    return 0;
}


int desenfileirar(Fila *f){
    int item = INT_MIN;

    if (!fila_vazia(f)){
        item = f->item[f->ini];

        if (f->ini < TAM_MAX - 1)
            f->ini++;
        else
            f->ini = 0;

        f->tam--;

        if (f->tam == 0){
            f->ini = -1;
            f->fim = -1;
        }
    }

    return item;
}


void imprimir_fila(Fila *f){
    Fila aux = *f;
    int item;

    while (!fila_vazia(&aux)){
        item = desenfileirar(&aux);

        printf("%d ", item);
    }
    
    printf("\n");
}

void liberar_fila(Fila *f){
    if (f != NULL)
        free(f);
}

void semaforo(Fila *E1, Fila *E2, Fila *E3, Fila *R)
{
    int semaforo_ativo = 0;
    
    while (!fila_vazia(E1) || !fila_vazia(E2) || !fila_vazia(E3))
    {
        if (semaforo_ativo == 0 && !fila_vazia(E1))
        {
            for (int i = 0; i < 3 && !fila_vazia(E1); i++)
            {
                int veiculo = desenfileirar(E1);
                
                enfileirar(R, veiculo);
            }
            
            semaforo_ativo = 1;
        } 
        else if ((semaforo_ativo = 1) && !fila_vazia(E2))
        { 
            for (int i = 0; i < 3 && !fila_vazia(E2); i++)
            {
                int veiculo = desenfileirar(E2);
                
                enfileirar(R, veiculo);
            }
            semaforo_ativo = 2;
        } 
        else if ((semaforo_ativo = 1) && !fila_vazia(E3))
        { 
            for (int i = 0; i < 3 && !fila_vazia(E3); i++)
            {
                int veiculo = desenfileirar(E3);
                
                enfileirar(R, veiculo);
            }
            
            semaforo_ativo = 0;
        }
        else
            semaforo_ativo = 0;
    }
    imprimir_fila(R);
}

int main() {
    Fila *E1 = criar_fila();
    Fila *E2 = criar_fila();
    Fila *E3 = criar_fila();
    Fila *R = criar_fila();

    int num;
    
    while (1)
    {
        scanf("%d", &num);
        if (num == -1) break;
        enfileirar(E1, num);
    }

    
    while (1) {
        scanf("%d", &num);
        if (num == -1) break;
        enfileirar(E2, num);
    }

    
    while (1)
    {
        scanf("%d", &num);
        if (num == -1) break;
        enfileirar(E3, num);
    }

    semaforo(E1, E2, E3, R);

    liberar_fila(E1);
    liberar_fila(E2);
    liberar_fila(E3);

    return 0;
}