#include <stdio.h>

int main()
{
    int num, produto=1,n=0;

    do
    {
        scanf("%d", &num);

        if(num != 0)
        {
            produto *= num;
            n++;
        }

    }while(num != 0);

    if(n>0)
    {
         printf("Produto = %d", produto);
    }

    return 0;
}
