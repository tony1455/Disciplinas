#include <stdio.h>
int main()
{
    int n, cont=1, resul=0;
    do
    {
        printf("Informe seu numero: ");
        scanf("%d", &n);
       for(int i=1; i<n; i++)
        {
             if(i%2!=0)
            {
                resul = resul + n;
            }
            else
            {
                resul = resul - n;
            }
        }
    }while(n > 0);

        printf("\nResultado: %d", resul);
        return 0;
}
