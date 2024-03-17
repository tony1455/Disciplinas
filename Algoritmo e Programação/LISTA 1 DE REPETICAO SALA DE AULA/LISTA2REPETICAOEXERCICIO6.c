/*6) Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os números ímpares de 1 até
N em ordem decrescente.*/

#include <stdio.h>

int main(void)
{
    int num,i;

    do
    {
        printf("Informe um numero Inteiro Positivo impar: ");
        scanf("%d", &num);

    }while(num<0);

        if(num%2==1)
        {
            printf("\nE um numero Inteiro Positivo impar");

            for(i=num;i>=0;i=i-3)
            {
                printf("\n%d",i);
            }
        }
        else
        {
            printf("\nE um numero Par!");
        }

    return 0;

}
