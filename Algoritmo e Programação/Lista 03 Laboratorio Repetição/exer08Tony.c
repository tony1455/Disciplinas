/*Escrever um programa, que leia valores inteiros positivos at ́e ser lido o valor
-1. Quando isso acontecer o programa dever ́a escrever a soma, a quantidade e a m ́edia dos valores lidos.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, soma=0, qtd=0;
    float media;

    while(1)
    {
        scanf("%d", &num);
        if(num == -1)
        {
            break;
        }
        soma = soma + num;
        qtd = qtd + 1;
        media = soma / (float)qtd;
    }


        printf("Soma = %d\n", soma);
        printf("Quantidade = %d\n", qtd);
        printf("Media = %.2f\n", media);
    return 0;
}
