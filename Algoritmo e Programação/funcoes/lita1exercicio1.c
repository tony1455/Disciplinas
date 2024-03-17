#include <stdio.h>
#include "primos.h"

int main(void)
{
    int num,i,soma,cont=0;
    float media;
    char opcao;

    printf("A - Verificar se um numero eh ou nao primo\n");
    printf("B - Exibir os numeros primos entre 1 e 100\n");
    printf("C - Media dos numeros primos entre 200 e 100\n");
    printf("\nEscolha uma opcao: ");
    setbuf(stdin, NULL);
    scanf("%c", &opcao);

    if(opcao == 'a' || opcao == 'A')
    {
        do
        {
            printf("Informe um numero positivo: ");
            scanf("%d", &num);

            if(num<=0)
            {
                printf("Valor invalido");
            }
        }while(num<=0);

        if(primo(num) == 2)
        {
            printf(" %d Eh primo", num);
        }
        else
        {
            printf("%d Nao eh primo", num);
        }
    }
    else if(opcao == 'b' || opcao == 'B')
    {
        for(i=2; i<=100; i++)
        {
            if(primo(i) == 2)
            {
                printf("%d", i);
            }
        }
    }
     else if(opcao == 'c' || opcao == 'C')
     {
         for(i=200; i>=100; i--)
         {
             if(primo(i) == 2)
             {
                 soma = soma + i;
                 cont++;
             }
         }
         media = (float)soma/cont;
         printf("Media dos primos entre 200 e 100: %.2f", media);
     }



    return 0;
}
