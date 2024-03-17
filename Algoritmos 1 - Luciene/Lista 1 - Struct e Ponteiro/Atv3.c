#include <stdio.h>
#include <stdlib.h>

typedef struct retangulo{
    int largura;
    int altura;

}Retangulo;

Retangulo inicializarStruct(int x, int y){
    Retangulo resul = {x,y};

    return resul;
}
Retangulo instanciarStruct(Retangulo x){
    Retangulo resul = x;

    return resul;
}

void imprimirStruct1(Retangulo x){
    printf("\nRetangulo 1: largura: %d", x.largura);
    printf("\nRetangulo 1: altura: %d\n", x.altura);
}
void imprimirStruct2(Retangulo x){
    printf("\nRetangulo 2: largura: %d", x.largura);
    printf("\nRetangulo 2: altura: %d\n", xaltura);
}
void imprimirSomadeRetangulo(Retangulo x){
    printf("\nSoma da largura: %d", x.largura);
    printf("\nSoma da altura: %d\n", x.altura);
}
int areadoRetangulo(Retangulo a){
    return a.altura * a.largura;
}

Retangulo somaRetangulo(Retangulo r1, Retangulo r2){
    Retangulo resul;

    resul.largura = r1.largura + r2.largura;
    resul.altura = r1.altura + r2.altura;

    return resul;
}

int main(){
    Retangulo R1 = inicializarStruct(3, 6);
    imprimirStruct1(R1);

    Retangulo R2 = instanciarStruct(R1);
    imprimirStruct2(R2);

    printf("\nArea do retangulo: %d\n", areadoRetangulo(R1));

    Retangulo R3 = somaRetangulo(R1,R2);
    imprimirSomadeRetangulo(R3);

    return 0;
}
