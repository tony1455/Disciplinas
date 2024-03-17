Um treinador de voleibol gostaria de manter estatísticas sobre sua equipe. A cada jogo, seu auxiliar anota quantas tentativas de saques, bloqueios e ataques cada um de seus jogadores fez, bem como quantos desses saques, bloqueios e ataques tiveram sucesso (resultaram em pontos). Seu programa deve mostrar qual o percentual de saques, bloqueios e ataques do time todo tiveram sucesso.

O programa deve ter a seguinte struct:

typedef struct {
    char nome[255];
    int saquesTotal;
    int bloqueiosTotal;
    int ataquesTotal;
    int saquesSucesso;
    int bloqueiosSucesso;
    int ataquesSucesso;
}Jogador;

A taxa de sucesso de cada jogador deve ser calculada em porcentagem (%) para cada um individualmente.

Para isso crie uma função que recebe a struct como REFERÊNCIA e preencha as variáveis dentro dessa função.

Input Format

A entrada é dada pelo número de jogadores N, seguido pelo nome de cada um dos jogadores. Abaixo do nome de cada jogador, seguem duas linhas com três inteiros cada. Na primeira linha S, B e A representam a quantidade de tentativas de saques, bloqueios e ataques e na segunda linha, S1, B1 e A1 com o número de saques, bloqueios e ataques deste jogador que tiveram sucesso.

Constraints

.

Output Format

A saída deve conter o percentual total de saques, bloqueios e ataques do time todo que resultaram em pontos, conforme mostrado nos exemplos.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    char nome[255];
    int saquesTotal;
    int bloqueiosTotal;
    int ataquesTotal;
    int saquesSucesso;
    int bloqueiosSucesso;
    int ataquesSucesso;
} Jogador;

void calcularPercentual(Jogador* jogador) {
    float saquesPercentual = (float)jogador->saquesSucesso / jogador->saquesTotal * 100;
    float bloqueiosPercentual = (float)jogador->bloqueiosSucesso / jogador->bloqueiosTotal * 100;
    float ataquesPercentual = (float)jogador->ataquesSucesso / jogador->ataquesTotal * 100;

    printf("Percentual de sucesso para o jogador %s:\n", jogador->nome);
    printf("Saques: %.2f%%\n", saquesPercentual);
    printf("Bloqueios: %.2f%%\n", bloqueiosPercentual);
    printf("Ataques: %.2f%%\n\n", ataquesPercentual);
}

int main() {
    int n;
    printf("Digite o número de jogadores: ");
    scanf("%d", &n);

    Jogador jogadores[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o nome do jogador %d: ", i+1);
        scanf("%s", jogadores[i].nome);

        printf("Digite o número de saques, bloqueios e ataques do jogador %s: ", jogadores[i].nome);
        scanf("%d %d %d", &jogadores[i].saquesTotal, &jogadores[i].bloqueiosTotal, &jogadores[i].ataquesTotal);

        printf("Digite o número de saques, bloqueios e ataques com sucesso do jogador %s: ", jogadores[i].nome);
        scanf("%d %d %d", &jogadores[i].saquesSucesso, &jogadores[i].bloqueiosSucesso, &jogadores[i].ataquesSucesso);

        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        calcularPercentual(&jogadores[i]);
    }

    return 0;
}
