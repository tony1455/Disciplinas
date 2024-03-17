#include <stdio.h>

/*soma   -      sem  retorno sem  parametros
substracao -    sem  retorno com  parametro
multiplicacao - com   //     sem    //
divisao -       com   //     com    //       */
void soma(void)

{
    int num1,num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
     printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1+num2);
}

void subtrair(int num1,int num2)
{
    printf("Subtracao: %d\n", num1 - num2);

}

int multiplicar(void)
{
    int num1,num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
     printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    return(num1*num2);
}

float dividir(int num1,int num2)
{
    return((float)num1/num2);
}

int main(void)
    {
        int opcao,num1,num2;

        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - divisao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1)
        {
            soma();
        }
        else if(opcao == 2)
        {
            printf("Informe o primeiro numero: ");
            scanf("%d", &num1);
            printf("Informe o segundo numero: ");
            scanf("%d", &num2);

            subtrair(num1, num2);

        }
        else if(opcao == 3)
        {
            printf("Multiplicacao: %d\n", multiplicar());
        }
        else if(opcao == 4)
        {
             printf("Informe o primeiro numero: ");
            scanf("%d", &num1);

            do
            {
                 printf("Informe o segundo numero: ");
                scanf("%d", &num2);

                if(num2 == 0)
                {
                    printf("Valor invalido\n");
                }
            }while(num2 == 0);

            printf("Divisao: %.2f\n", dividir(num1,num2));
        }
        return 0;
    }
