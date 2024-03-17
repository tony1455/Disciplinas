#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num == 0)
    {
        printf("O numero %d e igual a zero\n", num);
    }
    else if(num < 0)
        {
            printf("O numero %d eh menor do que zero\n", num);
        }
        else
        {
            printf("O numero %d eh maior que zero\n", num);

        }

    return 0;
}
