/*2) Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros naturais de 0 at� N em
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







