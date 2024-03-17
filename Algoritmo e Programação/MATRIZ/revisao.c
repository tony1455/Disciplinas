#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "vetores.h">
#define TAMANHO 15
#define LIMITE 20
#define SEMENTE 1
#define TAMANHO1 15
int main()
{
    int vetor[TAMANHO],vet1[TAMANHO1];

    geraNumeros(vetor,TAMANHO,LIMITE,10);
    mostraVetor(vetor,TAMANHO);
    printf("\n");
    geraNumeros(vet1,TAMANHO1,LIMITE,5);
    mostraVetor(vet1,TAMANHO1);

    return 0;
}
