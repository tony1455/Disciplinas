#include <stdio.h>

int main (void)
{
    int num=1, maior=0, menor=0, primeiro=0;

    while(num != 0)
    {
        printf("Informe um numero: ");
        scanf("%d", &num);
        if(num != 0)
        {


        if(primeiro == 0)
        {
            maior = num;
            menor = num;
            primeiro = 1;
        }
        else
        {
            if(num > maior)
            {
                maior = num;
            }
            else if(num < menor)
            {
                menor = num;
            }
        }
    }
}
    printf("\nO maior numero eh %d\n", maior);
    printf("\nO menor numero eh: %d\n",menor);

    return 0;
}
