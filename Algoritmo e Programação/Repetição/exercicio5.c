#include <stdio.h>

int main(void)
{
    int num1, i=1, cont=0;

    printf("Quantos numeros impares quer mostrar? ");
    scanf("%d", &num1);

    do
    {
        printf("%d\t", i);
        cont++;
        i = i+2;
    }while(cont < num1);



    return 0;
}
