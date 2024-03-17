#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,maior=-1;

    while(1)
    {
        scanf("%d", &num);
        if(num == -1)
        {
            break;
        }
        if(num > maior || maior == -1)
        {
            maior = num;
        }
    }
    printf("O maior valor informado = %d\n", maior);

    return 0;
}
