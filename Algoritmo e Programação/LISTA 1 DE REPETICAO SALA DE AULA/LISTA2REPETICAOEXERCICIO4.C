/*Fa�a um programa que leia um n�mero inteiro positivo par N e imprima todos os n�meros pares de 0 at� N em
ordem decrescente*/

#include <stdio.h>

int main(void)
{


    int num,i;

   do
   {
        printf("Informe um numero Inteiro Positivo Par: ");
        scanf("%d", &num);

   } while(num<0);

        if(num%2==0)
        {
            printf("O Numero e Par!");

            for(i=num;i>=0;i=i-2)
            {

                printf("\n %d", i);
            }
        }
        else
        {
            printf("\n Numero impar");
        }

    return 0;
}
