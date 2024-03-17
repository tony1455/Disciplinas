#include <stdio.h>
#include "divisores.h"

int main(void)
{
    char opcao;
    int num,i,cont=0,resto,limInf,limSup;

    printf("1 - Quantidade de Divisores de um numero\n");
    printf("2 - Divisores de um numero\n");
    printf("3 - Divisores, quantidade e soma de um intervalo\n");
    printf("4 - Maximo Divisor Comum de dois numeros\n");
    setbuf(stdin,NULL);
    printf("Escolha uma opcao: ");
    scanf("%c", &opcao);

    do
    {
        if(opcao == '1')
        {
            printf("\nInforme um numero para mostrar a quantidade de divisores: ");
            scanf("%d", &num);

            for(i=1; i<=num; i++)
            {
                if(num%i == 0)
                {
                    cont++;
                    printf("%d divisores",cont);
                }

            }
        }
       if(opcao == '2')
        {
            printf("\nInforme um numero para mostrar a quantidade de divisores: ");
            scanf("%d", &num);

           for (i=1;i<=num+1;i++)
           {
               if(num%i == 0)
               {
                    printf("%d  ", i);
                    cont++;
               }
               if(num==cont)
               {
                   i=num+1;
               }
           }
        }
        if(opcao == '3')
        {
            do
            {
                printf("Informe um limite inferior: ");
                scanf("%d", &limInf);
                printf("Informe um limite Superior: ");
                scanf("%d", &limSup);

            }while(limInf>=limSup);


            for(i=1;i<=10;i++)
            {
                printf("%d", i);

                 if(num%i == 0)
               {
                    printf("%d  ", i);
                    cont++;
               }
               if(num==cont)
               {
                   i=num+1;

               }
            }

        }
    }while(opcao<0 && num>=5);

    return 0;
}
