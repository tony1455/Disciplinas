/*Apresentar todos os n ́umeros reais com uma casa decimal a partir de 0 at ́e o
limite superior informado pelo usu ́ario em passo de 0.5*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i, num;
    scanf("%f", &num);

    for(i=0.5; i<=num; i=i+0.5)
    {
        printf("%.1f ", i);
    }
    return 0;
}

