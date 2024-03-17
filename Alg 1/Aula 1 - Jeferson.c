#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define dim 2

typedef struct personagem
{
    char nome[100];
    int energia;
    int defesa;
    int forca;
}Personagem;

//Caulcula o dano de cada ataque
void atacar(Personagem *atacante, Personagem *atacado)
{
    int dano = atacante->forca - atacado->defesa;
    if (dano <= 0)
    {
        dano = 1;
    }
    atacado->energia -= dano;
    if (atacado->energia < 0)
    {
        atacado->energia = 0;
    }
}

//Funcao batalha chama a funcao ataque a cada rodada e mostra o vencedor
void batalha(Personagem *p1, Personagem *p2, int turnos)
{
    int i;
    for (i = 0; i < turnos; i++)
    {
        atacar(p1, p2);

        if (p2->energia<=0)
        {
            break;
        }

        atacar(p2, p1);

        if (p1->energia == 0 || p2->energia == 0)
        {
            break;
        }
    }
    if (p1->energia == p2->energia)
    {
        printf("%s %d\n", p1->nome, p1->energia);
        printf("%s %d\n", p2->nome, p2->energia);
        printf("empate\n");
    }
    else if (p1->energia > p2->energia)
    {
        printf("%s %d\n", p1->nome, p1->energia);
        printf("%s %d\n", p2->nome, p2->energia);
        printf("%s\n", p1->nome);
    }
    else
    {
        printf("%s %d\n", p1->nome, p1->energia);
        printf("%s %d\n", p2->nome, p2->energia);
        printf("%s\n", p2->nome);
    }

}

int main(void)
{
    int turnos,i;

    Personagem vetor_p[dim];

    //Entrada de dados dos personagens
    for ( i = 0; i < dim; i++)
    {
        scanf("%s %d %d %d",vetor_p[i].nome,&vetor_p[i].energia,&vetor_p[i].defesa,&vetor_p[i].forca);
    }
    scanf("%d", &turnos);
    batalha(&vetor_p[0], &vetor_p[1],turnos);

    return 0;

}
