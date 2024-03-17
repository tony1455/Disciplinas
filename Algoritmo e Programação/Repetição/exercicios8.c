#include <stdio.h>

int main(void)
{
    int i,cont=0,soma=0;
    float media;

    printf("Divisiveis por 4 e por 10\n");

    for(i=500;i>=1;i--)
    {
        if(i%4 == 0 || i%10 == 0)
        {
            printf("%d\t", i);
            cont++;
            soma = soma + i;
        }
    }
    media = (float)soma/cont;
    printf("\nA media eh: %.2f", media);
    return 0;
}
