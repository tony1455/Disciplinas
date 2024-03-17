/*1) Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em
ordem crescente.*/
#include <stdio.h>

int main(void)
{
    int num,i;

    do
    {
        printf("Informe um numero inteiro positivo: ");
        scanf("%d", &num);
    }
    while(num<0);

    for(i=0; i<=num; i++)
    {
        printf("\n%d",i);
    }

    return 0;
}
