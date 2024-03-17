#include<stdio.h>
int main(void)
{
    int periodo=0, i, j;
    float valorBem=0, total, valorDepreciado, depreciacao;
    do
    {
        printf("Informe o valor do bem a ser depreciado: ");
        scanf("%f", &valorBem);
        if(valorBem<=0)
        {
            printf("Informe um valor positivo!!!\n");
        }
    }while(valorBem<=0);
    do
    {
        printf("Informe o periodo a ser depreciado: ");
        scanf("%d", &periodo);
        if(periodo<=0)
        {
            printf("Informe um valor positivo!!!\n");
        }
    }while(periodo<=0);
    printf("Ano\tValor do Bem\tDepreciacao\tValor Depreciacao\n");
    printf("=========================================================\n");
    for(i=1; i<=periodo; i++)
    {
        depreciacao=valorBem*(1.5 /100);
        valorDepreciado = valorBem-depreciacao;
        printf("%d\tR$ %.2f\tR$ %.2f\tR$ %.2f\n",i, valorBem, depreciacao, valorDepreciado);
        valorBem = valorBem - depreciacao;
        total = total+depreciacao;
    }
    printf("=========================================================\n");
    printf("Depreciacao acumulada: R$ %.2f", total);
    return 0;
}
