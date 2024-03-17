#include <stdio.h>


int main(void)
{

   int i, fatorial, j;

   for(i=1; i<=10; i++)
   {
       printf("%d! = ", i);

       fatorial = 1;

       for(j=i; j>=2; j--)
       {
           printf("%d * ", j);
           fatorial = fatorial * j;
       }
       printf("1 = %d\n", fatorial);
   }



    return 0;
}
