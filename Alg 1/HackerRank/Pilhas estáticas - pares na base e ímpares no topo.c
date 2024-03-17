#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define TAM_MAX 100

typedef struct Pilha Pilha;

struct Pilha{
    int item[TAM_MAX];
    int topo;
};

Pilha* criar_pilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    p->topo = -1;

    return p;
}


int pilha_cheia(Pilha *p){
    if (p == NULL)
        return -1;
    else if (p->topo == (TAM_MAX - 1))
        return 1;
    else
        return 0;
}


int pilha_vazia(Pilha *p){
    if (p == NULL)
        return -1;
    else if (p->topo == -1)
        return 1;
    else
        return 0;
}



int empilhar(Pilha *p, int item)
{
    if (p == NULL)
        p = criar_pilha();

    if (!pilha_cheia(p))
    {
        p->topo++;
        p->item[p->topo] = item;

        return 1;
    }

    return 0;
}


int desempilhar (Pilha *p){
    int item = INT_MIN;

    if (!pilha_vazia(p)){
        item = p->item[p->topo];

        p->topo--;
    }

    return item;
}
void imprimir_pilha(Pilha *p){
    Pilha aux = *p;
    int item;

    while (!pilha_vazia(&aux)){
        item = desempilhar(&aux);

        printf("%d ", item);
    }

    printf("\n");
}

void liberar_pilha(Pilha *p){
    if (p != NULL)
        free(p);
}

void concatenar_pilhas(Pilha* pilha1, Pilha* pilha2)
{
    Pilha *aux = criar_pilha();
    Pilha *resultado = criar_pilha();

    while (!pilha_vazia(pilha1))
    {
        int valor = desempilhar(pilha1);

        if(valor % 2 == 0)
        {
            empilhar(resultado, valor);
        }

        else
        {
            empilhar(aux, valor);
        }

    }

    while (!pilha_vazia(pilha2))
    {
        int valor = desempilhar(pilha2);

        if (valor % 2 == 0)
        {
            empilhar(resultado, valor);
        }
        else
        {
            empilhar(aux, valor);
        }
    }
    while (!pilha_vazia(aux))
    {
        empilhar(pilha1, desempilhar(aux));
    }

    while (!pilha_vazia(pilha1))
    {
        empilhar(resultado, desempilhar(pilha1));
    }

     while (!pilha_vazia(resultado))
    {
        empilhar(aux, desempilhar(resultado));
    }

    imprimir_pilha(aux);
}

int main()
{

    Pilha* pilha1 = criar_pilha();
    Pilha* pilha2 = criar_pilha();

    int num = 0;

    while(num != -1)
    {
        scanf("%d", &num);

        if (num != -1)
            empilhar(pilha1, num);
    }

    num = 0;

    while(num != -1)
    {
        scanf("%d", &num);

        if (num != -1)
            empilhar(pilha2, num);
    }

    concatenar_pilhas(pilha1, pilha2);

    liberar_pilha(pilha1);
    liberar_pilha(pilha2);

    return 0;
}

