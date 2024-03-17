#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, menor=-1;

    while(1)
    {
        scanf("%d", &num);
        if(num == -1)
        {
            break;
        }
        if(num < menor || menor == -1)
        {
            menor = num;
        }
    }
    printf("O menor valor informado eh = %d\n", menor);
    return 0;
}
