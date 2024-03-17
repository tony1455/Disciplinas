/*Uma empresa deseja calcular a depreciação de seus bens. Para tanto, desenvolver um programa que
obtenha a taxa de depreciação anual para os bens, o valor do bem a ser depreciado e o período em anos.
Valor depreciado = valor do bem * (taxa de depreciação / 100)
Valor do bem depreciado = valor do bem – valor depreciado
Considere que a taxa de depreciação tem valor fixo de 1.5.
Mostrar os resultados como no exemplo a seguir*/


#include<stdio.h>
int main(void)
{
    int periodo=0,i;
    float valodobem,depreciado,valordepreciado,total;

    do
    {
        printf("Informe o valor do bem a ser depreciado: ");
        scanf("%f", &valodobem);
        if(valodobem<0)
        {
            printf("Informar um valor positivo");
        }
    }while(valodobem<0);
    do
    {
        printf("Informe o periodo da depreciacao (em anos):  ");
        scanf("%d", &periodo);
        if(periodo<0)
        {
            printf("Informar um periodo positivo");
        }
    }while(periodo<0);
    printf("\nAno\tValor do Bem\tDepreciacao\tValor Depreciado\n");
    printf("========================================================\n");

    for(i=1;i<=periodo;i++)
    {
        depreciado = valodobem*(1.5/100);
        valordepreciado = valodobem - depreciado;
        printf("%d\tR$ %.2f\tR$ %.2f\tR$ %.2f\n",i,valodobem,depreciado,valordepreciado);
        valodobem = valodobem - depreciado;
        total = total + depreciado;
    }
    printf("=========================================================\n");
    printf("Depreciacao acumulada: R$ %.2f\n", total);




    return 0;
}
