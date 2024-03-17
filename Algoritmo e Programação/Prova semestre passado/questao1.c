#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,soma = 0,i;

   do
   {
      printf("Informe um numero inteiro: ");
      scanf("%d", &num);
      if(num < 1)
      {
          printf("\nInforme um numero maior que 1\n");
      }
   }while(num < 1);

   for(i=1; i<num;i++)
   {
       if(i%2!=0)
       {

            printf("\nImpares do intervalo = %d ", i);
            soma = soma + i;
       }
   }
    printf("\nA soma de todos impares do intervalo de 1 a %d = %d ", num,soma);
    return 0;
}
