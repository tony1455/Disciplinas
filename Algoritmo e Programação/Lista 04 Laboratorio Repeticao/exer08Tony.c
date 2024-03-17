/*Juca aplicou um valor inicial em R$ com rendimento de 10% ao mˆes. Quantos
meses ser ̃ao necess ́arios para o capital investido inicialmente ultrapasse o valor de R$ 500,00*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float capital,total;
    int mes=0;

    scanf("%f", &capital);
    printf("Capital inicial = R$ %.2f\n", capital);
    total = capital;
    while(total <= 500.00)
    {
        total = total + (total * 0.10);
        mes = mes + 1;
        printf("%2do mes = R$ %.2f\n", mes, total);
    }
    printf("Capital final = R$ %.2f apos %d meses\n", total, mes);


    return 0;
}

