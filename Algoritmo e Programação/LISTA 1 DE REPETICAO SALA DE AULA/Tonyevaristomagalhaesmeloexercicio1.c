#include <stdio.h>

int main(void)
{
    int num,i,contImpar,j,k,somaImpar;
    char repetir;


    do
    {
        do
        {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if(num < 1)
        {
            printf("Numero Invalido!");
        }
        }while(num < 1);

    for(i=1; i<=num; i++)
    {
        contImpar=0;

        printf("\n%d ==>  ", i);

        for(j=1; j<=num; j++)
        {
            somaImpar=0;

            for(k=1; k<=j; k++)
            {
                if(j%k == 0)
                {
                    somaImpar++;
                }
            }
            if(somaImpar == 2)
            {
                printf("%d  ", j);
                contImpar++;
            }

        }
        printf("==> %d impares", contImpar);


    }
        printf("\n\nDeseja repetir o programa (S/s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &repetir);

    }while(repetir == 's' || repetir == 'S');

    return 0;
}
