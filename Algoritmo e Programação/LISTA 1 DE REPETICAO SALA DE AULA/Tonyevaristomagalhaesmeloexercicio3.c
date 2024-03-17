#include <stdio.h>

int main(void)
{
    char ch='F',repetir,cont=0;
    float porcentagem;
    do
    {

        while(ch != '0')
        {

            printf("Informe um caracter: ");
            setbuf(stdin,NULL);
            scanf("%c", &ch);

            if(ch == '1' && ch == '99')
            {
                cont++;
            }
            else
            {

            }

            if(ch%2 == 0)
            {
                printf("'%c' que corresponde ao decimal de %d na tabela ASCII eh primo\n",ch,ch);
            }
            else
            {
                printf("'%c' que corresponde ao decimal de %d na tabela ASCII nao eh primo\n",ch,ch);
            }
        }

        printf("\nDeseja repetir o programa (S/s): ");
        setbuf(stdin,NULL);
        scanf("%c", &repetir);

    }while(repetir == 'S' || repetir == 's');


    return 0;
}
