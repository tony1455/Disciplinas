#include <stdio.h>

int main(void)
{
    int num,i,j;

   do
   {
       printf("Informe um numero inteiro positivo: ");
       scanf("%d", &num);

       if(num < 0)
       {
           printf("Numero Invalido!\n");
       }
   }while(num < 0);

        for(i=1; i<=num; i++)
        {
            printf("%d\t",i);

            for(j=i+num;j<=num*num;j=j+num)
            {
                printf("%d\t", j);
            }

            printf("\n");
        }
    return 0;
}
