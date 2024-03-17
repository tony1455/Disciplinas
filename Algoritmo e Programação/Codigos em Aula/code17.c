#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    while(1)
    {
        scanf("%d", &num);

        if (num >= 10 && num <= 1000 && num % 3 != 0 && num % 10 != 0)
        {
            printf("%d", num);
        }

    }


    return 0;
}
