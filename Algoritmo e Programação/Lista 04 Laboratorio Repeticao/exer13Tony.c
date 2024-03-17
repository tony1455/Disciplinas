#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont=0,i;

    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num);

    if(num == 1)
    {
        printf("Numero %d nao e primo pois so e divisivel por ele mesmo\n", num);
        return 0;
    }

    for(i=1; i<=num; i++)
    {
        if((num%i)==0)
        {
            cont++;
        }

    }
    if(cont == 2)
        {
            printf("\n%d E um numero primo", num);

        }
        else
        {
            printf("\n%d Nao e um numero primo\n",num);
        }




    return 0;
}
