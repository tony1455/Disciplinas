#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Informe um numero entre 1 e 3: ");
    scanf("%d", &num);

    switch(num)
    {
    case 1:
        printf("DOMINGO\n");
        break;
    case 2:
        printf("SEGUNDA\n");
        break;
    case 3:
        printf("TERCA\n");
        break;
        /*assim por diante*/
    default:
        printf("Opcao Invalida");
    }

    return 0;
}
