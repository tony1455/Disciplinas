#include <stdio.h>

int main (void)
{
    int num1, num2, inc, aux, i, cont=0, soma=0;
    float media;

        printf("Informe o limite inicial: ");
        scanf("%d", &num1);
        printf("Informe o limite final: ");
        scanf("%d", &num2);
        printf("Informe o incremento: ");
        scanf("%d", &inc);


        if(num1>num2)
        {
            aux = num1;
            num1 = num2;
            num2 = aux;
        }

        for(i = num1; i<=num2; i=i+inc)
        {
            printf("\n%d\t", i);

            if(i%2==1 && i%35 == 0)
            {
                printf("impar e multiplo de 35");
                cont++;
                soma = soma + i;
            }
        }
        if(cont>0)
        {
            media = (float)soma/cont;
            printf("\n\nMedia dos impares e multiplos de 35%: %.1f\n", media);

        }
        else
        {
            printf("\n\nNao existe nenhum impar e multiplos de 35");
        }

    return 0;
}
