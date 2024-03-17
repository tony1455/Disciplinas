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
