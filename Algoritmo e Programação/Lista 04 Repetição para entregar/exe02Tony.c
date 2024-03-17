/*Uma empresa deseja calcular a deprecia ̧c ̃ao de seus bens. Desenvolva um
programa que obtenha a taxa de deprecia ̧c ̃ao anual para os bens, o valor do bem a ser depreciado e o
per ́ıodo em anos. Utilize os seguintes c ́alculos*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int periodo=0,i;
    float valorBem, valorDepreciado, valorBemDepreciado,total;

    do
    {
        printf("Informe o valor do bem a ser depreciado: ");
        scanf("%f", &valorBem);
        if(valorBem < 0)
        {
            printf("Informe um valor positivo");
        }

    }while(valorBem < 0);
    do
    {

        printf("Informe o periodo da depreciacao (em anos): ");
        scanf("%d", &periodo);
        if(periodo < 0)
        {
            printf("Informe um periodo positivo");
        }
    }while(periodo<0);

    printf("\nAno\tValor do Bem\tDepreciacao\tValor Depreciado\n");
    printf("=========================================================\n");
    for(i=1;i<= periodo;i++)
    {
        valorDepreciado = valorBem *(1.5 / 100);
        valorBemDepreciado = valorBem - valorDepreciado;
        printf("%d\tRS %.2f\tR$ %.2f\tR$ %.2f\n", i, valorBem, valorDepreciado, valorBemDepreciado);
        valorBem = valorBem - valorDepreciado;
        total = total + valorDepreciado;
    }
    printf("============================================================\n");
    printf("Depreciacao acumulada: R$ %.2f", total);

    return 0;
}
