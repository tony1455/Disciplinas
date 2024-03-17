#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;

    scanf("%d", &num);

    for(i=num; i>=1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
