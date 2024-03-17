#include <stdio.h>

int main() {
    int i=1, soma=0;

    while(soma <= 100)
    {
        printf("%d\t", i);;
        soma = soma + i;
        i++;
    }
    printf("\nResultado = %d", soma);

    return 0;
}
