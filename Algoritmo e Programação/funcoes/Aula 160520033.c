//Variavel global
#include <stdio.h>
#include <stdlib.h>

int varGlobal;
void tabuada(void)
{
    int i,resultado;
    for(i=1;i<=10;i++)
    {
        resultado = varGlobal * i;
        printf(" %d * %d = %d\n", varGlobal, i , resultado);
    }
}
int main()
{
    do
    {
        printf("Informe um numero positivo: ");
        scanf("%d", &varGlobal);
        if(varGlobal > 0)
            tabuada();
    }while(varGlobal > 0);
    return 0;
}

