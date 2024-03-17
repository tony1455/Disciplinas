#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TAM_MAX 100

typedef struct Pilha{
    char item[TAM_MAX];
    int topo;

}Pilha;

Pilha* criar_pilha()
{
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    p->topo = -1;

    return p;
}
int pilha_cheia(Pilha *pi)
{
    if(pi == NULL)
        return -1;
    return (pi->topo == TAM_MAX);
}
int pilha_vazia(Pilha *pi)
{
    if(pi == NULL)
        return -1;
    return (pi->topo == 0);
}

int main()
{
    return 0;
}
