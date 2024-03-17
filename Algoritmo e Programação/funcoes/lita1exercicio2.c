#include <stdio.h>
#include "fatorial.h"

int main(void)
{
    char opcao;
    int num,i,fatorial;

    printf("A - Fatorial entre 1 e 8\n");
    printf("B - Fatorial de um numero positivo\n");
    printf("Escolha uma opcao: ");
    setbuf(stdin, NULL);
    scanf("%c", &opcao);

    do
    {

        if(opcao == 'A' || opcao == 'a')
        {

            for(i=1;i<=8;i++)
            {
            fatorial = calcularFat(i);
            mostraFat(i, fatorial);

            }
        }
        else if(opcao == 'B' || opcao == 'b')
        {
        do
        {
            printf("\nInforme um numero positivo: ");
            scanf("%d", &num);

            if(num<=0)
            {
                printf("Valor invalido\n");
            }
        }while(num<=0);
        fatorial = calcularFat(num);
        mostraFat(num, fatorial);
        }
    setbuf(stdin,NULL);
    printf("Deseja repetir o programa? (S/s)");
    scanf("%c", &opcao);

    }while(opcao == 'S' || opcao == 's');

    return 0;
}
