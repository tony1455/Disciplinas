/*5) Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os números ímpares de 1 até
N em ordem crescente.*/

#include <stdio.h>

int main(void)
{
    int num,i;

   do
   {
        printf("Informe um numero Inteiro Positivo impar: ");
        scanf("%d", &num);

   } while(num<0);

        if(num%2==1)
        {
            printf("O Numero e impar!");

            for(i=1;i<=num;i=i+2)
            {

                printf("\n %d", i);
            }
        }
        else
        {
            printf("\nNumero E Par!\n");
        }

    return 0;
}

