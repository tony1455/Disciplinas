#include <stdio.h>
int main()
{
    int n, resul=0;
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
            if(i%2==0)
            {
                resul = resul - n;
            }
        }
    }while(n > 0);

        printf("\nResultado: %d", resul);
        return 0;
}
