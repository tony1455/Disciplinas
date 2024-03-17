#include <stdio.h>
#include "funcoes.h"

int main(void)
{
    int numero,i;

    printf("Infrome um numero: ");
    scanf("%d", &numero);

    tabuada(numero);

   if(primo(numero) == 0)
   {
       printf("%d eh primo\n", numero);
   }
   else
   {
       printf("%d nao eh primo\n", numero);
   }
    return 0;
}
