/*2) Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em
ordem decrescente.*/
#include <stdio.h>

int main(void)
{

    int i,num;

    while(num)
    {
        printf("Informe um numero Natural Positivo: ");
        scanf("%d", &num);

        if (num)
        {
            for (i=num; i>=0; i--)
            {
                printf("%d \n",i);
            };
        }
        else
        {
            printf("Nao e positivo! \n");
        }

    }
    return 0;
}







