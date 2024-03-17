#include <stdio.h>

int main(void)
{
    int num, i, soma=0, produto=1, cont=0, contTodos=0, somaTodos=0;
    float media;

    do
    {
        printf("Informe um numero maior que 2: ");
        scanf("%d", &num);

        if(num < 2)
        {
            printf("Valor Invalido\n");
        }
    }while(num < 2);

    for( i=2; i<=num; i++)
    {
        if(i%2 == 0)
        {
            printf("%d\t", i);
            soma = soma + i;
            printf("Soma: %d\n", soma);
        }
        else
        {
            if(i%9 == 0)
            {
                produto = produto * i;
                cont++;
            }
        }
        contTodos++;
        somaTodos = somaTodos + i;

    }

    printf("\nSoma dos Pares eh: %d\n", soma);

    if(cont>0)
    {
        printf("\nProdutos impares e multiplo de 9: %d\n", produto);
    }
    else
    {
        printf("\nNao existe nenhum numero impar que e multiplos de 9\n");
    }

    media = (float)somaTodos/contTodos;
    printf("\nMedia de todos os valores do intervalo: %.1f\n",media);

    return 0;
}
