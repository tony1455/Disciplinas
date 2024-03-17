/*1) Ler uma string de até 100 caracteres, contar e exibir a quantidade de cada uma das vogais existentes
nessa string. Armazenar essas quantidades em um vetor. É indispensável armazenar a quantidade no vetor à
medida que a string é percorrida na forma vetVogais[indice]++. Portanto, o vetor que armazena a
quantidade de vogais deve ser inicializado com zero antes de ser utilizado. Mostrar os resultados da seguinte
forma:*/

#include <stdio.h>

int main(void)
{
    char string[100];

    printf("Informe um texto com ate 100 caracteres: ");
    gets(string);

    printf("VOGAL   QUANTIDADE\n");
    printf("===================\n");

    return 0;
}
