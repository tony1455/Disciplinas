#include <stdio.h>

int main() {
    int numero, maior = 0;

    do
    {
        scanf("%d", &numero);

        if(numero > maior && numero != 0)
        {
            maior = numero;
        }
        if(numero < maior && numero != 0)
        {
            maior = numero;
        }

    } while(numero != 0);

    if(maior != 0)
    {
        printf("Maior =  %d", maior);
    }

    return 0;
}
