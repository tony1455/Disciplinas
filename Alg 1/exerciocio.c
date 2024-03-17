#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    char nome[100];
    int energia;
    int defesa;
    int forca;
}Personagem;

void batalha(Personagem p1,Personagem p2,int rodada){
    int i;
    for(i=0;i<rodada;i++){
        if(p1.energia <=0||p2.energia<=0){
            if(p2.energia<0)
                p2.energia=0;
            else
                p1.energia=0;
            break;
        }
    }
    if(p1.energia == p2.energia){
        printf("%s %d\n", p1.nome,p1.energia);
        printf("%s %d\n", p2.nome,p2.energia);
        printf("empate\n");
    }
    else if(p1.energia > p2.energia){
        printf("%s %d\n", p1.nome,p1.energia);
        printf("%s %d\n", p2.nome,p2.energia);
        printf("%s\n", p1.nome);
    }
    else{
        printf("%s %d\n", p1.nome,p1.energia);
        printf("%s %d\n", p2.nome,p2.energia);
        printf("%s\n", p2.nome);
    }
}

int main() {
    Personagem p1;
    Personagem p2;
    int rodada;

    scanf("%s %d %d %d", p1.nome,&p1.energia,&p1.defesa,&p1.forca);
    scanf("%s %d %d %d", p2.nome,&p2.energia,&p2.defesa,&p2.forca);
    scanf("%d",&rodada);

    batalha(p1,p2,rodada);

    return 0;
}
