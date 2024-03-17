#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
   do
   {
       scanf("%d", &n);
   }while(n<=0);

        for(i=1;i<=n;i++)
        {
            printf("%d ", i);
        }

    return 0;
}
