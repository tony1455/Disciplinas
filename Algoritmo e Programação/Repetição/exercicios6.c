#include <stdio.h>

int main(void)
{
    int num, i;
    long long int fatorial=1;

    printf("Informe um numero: ");
    scanf("%d", &num);

    printf("%d! = ", num);

    for(i=num; i>=2; i--)
    {
        fatorial = fatorial * i;
        printf("%d * ",i);
    }
    printf("1 = %lld", fatorial);

    return 0;
}
