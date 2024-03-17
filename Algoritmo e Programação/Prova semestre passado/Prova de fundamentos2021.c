#include <stdio.h>

int main()
{
    int num, dig1=0,dig2=0,dig3=0,dig4=0,dig5=0, somaInverso=0,contDivisor=0,i;

    do
    {
        printf("Informe um numero inteiro de 5 digitos: ");
        scanf("%d", &num);

    }while(num < 10000 || num > 99999);

    dig1 = num / 10000;
    dig2 = num / 1000 % 10;
    dig3 = num / 100 % 10;
    dig4 = num / 10 % 10;
    dig5 = num % 10;

    printf("\nDigito 1 = %d\nDigito 2 = %d\nDigito 3 = %d\nDigito 4 = %d\nDigito 5 = %d\n", dig1,dig2,dig3,dig4,dig5);
    printf("\nSoma = %d", dig1+dig2+dig3+dig4+dig5);
    printf("\nInverso = %d%d%d%d%d", dig5,dig4,dig3,dig4,dig5);
    somaInverso = (dig5*10000) + (dig4*1000) + (dig3*100) + (dig2*10) + dig1;

    for(i=2; i <somaInverso; i++)
    {
        if((somaInverso %i) == 0)
        {
            contDivisor++;
        }
    }
    if(contDivisor == 0)
    {
        printf("\nNumero %d primo", somaInverso);
    }
    else
    {
        printf("\nNumero %d nao eh primo", somaInverso);
    }
    if(dig5 == dig1 && dig4 == dig2)
    {
        printf("\nNumero %d eh um polindromo com %d", num, somaInverso);
    }
    else
    {
        printf("\nNumero %d nao eh polindromo com %d", num,somaInverso);
    }

    return 0;
}

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
#include <stdio.h>
#include <stdlib.h>


int main()
{

    char ch;
    float percentual;
    int contDivisor=0, i, contTotal=0, contNLetras=0;

    do
    {
        setbuf(stdin,NULL);
        scanf("%c", &ch);
        if(ch!='0')
        {
            contTotal++;
            if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
            {
                for(i=1; i<=ch; i++)
                {
                    if((ch%i) == 0)
                    {
                        contDivisor++;
                    }

                }
                if(contDivisor == 2)
                {
                    printf("%c eh primo\n", ch);
                }
                else
                {
                    printf("%c nao e primo\n");
                }
            }
            else
                contNLetras++;
        }

    }while(ch !='0');

    printf("\nPorcentual = %d%%", (contNLetras*100)/contTotal);

    return 0;
}

