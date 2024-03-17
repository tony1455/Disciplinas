#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, fatorial=1;

    printf("Informe um numero: ");
    scanf("%d", &num);

    for(i=num; i>=2; i--)
    {
        fatorial = fatorial * i;
        printf("%d * ", i);
    }
    printf("1 = %d", fatorial);



    return 0;
}
