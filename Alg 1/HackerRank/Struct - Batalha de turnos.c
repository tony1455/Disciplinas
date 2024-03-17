/*Gladstone est� desenvolvendo um jogo simples de RPG em que h� batalhas, os quais s�o por turnos, onde, em cada luta, os jogadores se revezam em cada ataque.
Cada personagem, al�m do nome (string), tem os seguintes atributos representados por n�meros inteiros: energia, defesa e for�a.

Em cada ataque, a energia do personagem que est� sofrendo o golpe � reduzida.

O dano (redu��o de energia) � dado pela subtra��o entre o atributo de for�a (F) do atacante e o atributo de defesa do personagem atacado, o qual pode ter
redu��o de energia.

Caso a diferen�a entre for�a (atacante) e defesa (atacado) seja menor igual a zero, o dano ser� de 1 ponto.
Se o dano resultar em energia negativa, o valor da mesma para o personagem derrotado dever� ser "0".

Em cada batalha, o perdedor ser� o personagem que tiver a energia zerada ou que tiver o menor valor de energia. Tamb�m, poder� ocorrer empate.
� importante ressaltar que o personagem com energia zerada n�o pode mais atacar!

Implemente uma fun��o que receba duas vari�veis referentes aos personagens e um n�mero inteiro que represente a quantidade de turnos, onde o primeiro personagem
fornecido como par�metro come�a o ataque.
Ao final, a fun��o dever� imprimir o resultado, indicando o nome personagem vencedor ou se houve empate.

Input Format

Nas duas primeiras linhas, devem ler lidos os dados dos personagens. "nome (vetor de char) energia (int) defesa (int), for�a (int)".

Na linha seguinte, deve ser lida a quantidade de rodadas que dever� ter a batalha.

Output Format

Na primeira e segunda linha, imprimir o nome e a energia restante do primeiro e do segundo personagem, ap�s a execu��o das rodadas de ataques.
Na terceira lunha, imprimir o nome do personagem vencedor ou "empate", caso os personagens tiverem a mesma quantidade de energia (neste exerc�cio
n�o levando em conta que os personagens possam iniciar uma batalha com diferentes valores de energia).

Sample Input 0

idril 1000 200 150
gidal 1000 100 300
5

Sample Output 0

idril 500
gidal 750
gidal

Sample Input 1

jilian 600 100 50
endric 600 100 50
6

Sample Output 1

jilian 594
endric 594
empate

Sample Input 2

paladriel 800 75 150
orcson 800 100 90
8

Sample Output 2

paladriel 680
orcson 400
paladriel

Sample Input 3

et_bilu 800 300 1200
orcson 800 100 90
8

Sample Output 3

et_bilu 800
orcson 0
et_bilu*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct{
    char nome[100];
    int energia;
    int defesa;
    int forca;
}Personagem;

void atacar(int atacante,int atacado){
    int dano = atacante - atacado;
    if(dano <=0){
        return 1;
    }
    else
        return 0;

    return dano;
}

void batalha(Personagem p1,Personagem p2,int rodada){
    for(int i=0;i<rodada;i++){
        if(rodada %2 == 1)
{
            if(p1.energia < 0)
                p1.energia = 0;
            else
                p2.energia = 0;
            break;
        }
    }


}

int main(){
    Personagem p1;
    Personagem p2;
    int rodada;

    scanf("%s %d %d %d", p1.nome,&p1.energia,&p1.defesa,&p1.forca);
    scanf("%s %d %d %d", p2.nome,&p2.energia,&p2.defesa,&p2.forca);
    scanf("%d",&rodada);

    batalha(p1,p2,rodada);

    return 0;
}
