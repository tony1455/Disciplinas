#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,z;
    float y;

    printf("Informe um numero inteiro: ");
    scanf("%d", &x);

    printf("\n decimal: %d , endereco de memoria: %p \n", x, &x);
    return 0;
}
