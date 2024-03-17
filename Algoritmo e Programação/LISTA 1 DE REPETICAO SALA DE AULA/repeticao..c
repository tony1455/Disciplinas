#include <stdio.h>

int main(void)
{
    int num,i,j,k,contDiv,contPrimos;
    char repetir;

    do
    {

    do
    {
        printf("Informe um numero positivo: ");
        scanf("%d", &num);
        if(num < 0)
        {
            printf("Valor invalido");
        }
    }while(num < 0);

    for(i=1; i<=11; i++)
    {
        contPrimos = 0;

        printf("%d ==> ", num);

        for(j=1; j<=num; j++)
        {
            contDiv = 0;
            for(k=1; k<=j; k++)
            {
                if(j%k == 0)
                {
                    contDiv++;
                }
            }
            if(contDiv == 2)
            {
                printf("%d  ", j);
                contPrimos++;
            }

        }
        printf(" ==> %d primos\n", contPrimos);
        num++;
    }
     printf("\nDeseja repetir o programa (S/s)? ");
    setbuf(stdin, NULL);
    scanf("%c", &repetir);
    }while(repetir == 's' || repetir == 'S');

    return 0;
}
