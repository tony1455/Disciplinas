#include <stdio.h>

int main()
{
    float resistor, soma = 0, req,quantidade = 0;

    while (1)
    {
        scanf("%f", &resistor);
        if (resistor == 0)
        {
            break;
        }
        soma += 1 / resistor;
        quantidade++;
    }

    if (quantidade == 0)
    {

    }
    else
    {
        req = 1 / soma;
        printf("%.0f", req);
    }

    return 0;
}
