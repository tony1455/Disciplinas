#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limInferior, limSuperior,i, j, primo;

    do
    {
        printf("Informe o limite inferior de tres digitos: ");
        scanf("%d", &limInferior);
    }while(limInferior < 100 || limInferior > 999);
    do
    {
        printf("Informe o limite superior de tres digitos: ");
        scanf("%d", &limSuperior);

    }while(limSuperior < 100 || limSuperior > 999 || limSuperior < limInferior);

       for(i=limInferior; i<=limSuperior; i++)
       {
           primo = 1;

           for(j=2; j < i; j++)
           {
               if((i%j) == 0)
               {
                   primo = 0;
                   break;
               }
           }
          if(primo && i > 1)
          {
              printf("\n%d ", i);

            if(primo%2==0)
            {
                printf("eh par", i);
            }
            else
            {
                printf("e impar", i);
            }
          }
       }

        return 0;
}
