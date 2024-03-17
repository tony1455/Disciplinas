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

void imprimirStruct(Retangulo x){
    printf("\nRetangulo: largura: %d", x.largura);
    printf("\nRetangulo: altura: %d\n", x.altura);
}

int main(){
    Retangulo R1 = inicializarStruct(3, 6);
    imprimirStruct(R1);

    Retangulo R2 = instanciarStruct(R1);
    imprimirStruct(R2);

    return 0;
}
