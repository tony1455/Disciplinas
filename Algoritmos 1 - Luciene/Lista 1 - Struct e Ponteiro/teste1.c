#include <stdio.h>
#include <stdlib.h>

static void verificarPositivos(int *v, int n, int *verificar)
{
    if(v != NULL)
    {
        int existeP = 0;
        int existeN = 0;
        int todosP = 0;
        int todosN = 0;

        for(int i = 0; i < n; i++)
        {
            if(v[i] > 0)
            {
                existeP = 1;
                todosP++;
                (*verificar)++;
            }
            else
            {
                existeN = 1;
                todosN++;
                (*verificar)++;
            }
        }

        if((existeP) && (todosP == n))
            printf("Todos os numeros sao positivos.\n");
        else if((existeN) && (todosN == n))
            printf("Todos os numeros nao sao positivos.\n");
        else if((existeP) && (existeN))
            printf("Existe numero nao positivo.\n");
    }
}

static void imprimirVetor(int *v, int n, int *verificar)
{
    if(v != NULL)
    {
        for(int i = 0; i < n; i++)
        {
            printf("%d ", v[i]);
            (*verificar)++;
        }
    }
}

static void verificarPrimo(int *v, int n, int *verificar)
{
    if(v != NULL)
    {
        int existeP = 0;
        int existeNP = 0;
        int todosP = 0;
        int todosNP = 0;
        int validar;
        int testar = 0;

        for(int i = 0; i < n; i++)
        {
            validar = 0;

            for(int j = v[i] - 1; j > 1; j--)
            {
                if(v[i] % j == 0)
                {
                    existeNP = 1;
                    (*verificar)++;
                    validar = 1;
                    break;
                }
            }

            if((!validar) && (v[i] > 1))
            {
                testar++;
                existeP = 1;
                todosP++;
                (*verificar)++;
            }

            if((validar) && (existeNP))
            {
                todosNP++;
                (*verificar)++;
            }
        }

        int *primos = malloc(sizeof(int) * testar);
        int num = 0;

        for(int i = 0; i < n; i++)
        {
            validar = 0;
            for(int j = v[i] - 1; j > 1; j--)
            {
                if(v[i] % j == 0)
                {
                    (*verificar)++;
                    validar = 1;
                    break;
                }
            }

            if((!validar) && v[i] > 1)
            {
                primos[num] = v[i];
                num++;
                (*verificar)++;
            }
        }

        if((existeP) && (todosP == n))
        {
            printf("\nTodos os numeros sao primos:\n");
            imprimirVetor(primos, num, verificar);
        }
        else if((existeNP) && (todosNP == n))
            printf("\nNao ha numeros primos.\n");
        else if((existeP) && (existeNP))
        {
            printf("\nHa numero primo:\n");
            imprimirVetor(primos, num, verificar);
        }

        free(primos);
    }
}

int main(void)
{
    FILE *arq;
    char Linha[100];
    int i = 0;
    int verificar = 0;

    arq = fopen("numero45.txt", "r");

    if(arq == NULL)
    {
        printf("Problemas na abertura do arquivo\n");
        return 0;
    }

    while(fgets(Linha, 100, arq) != NULL)
    {
        //printf("Linha %d : %s", i + 1, Linha);
        verificar++;
        i++;
    }

    int n = i;


    int *v = malloc(sizeof(int) * n);

    fseek(arq, 0, SEEK_SET);

    i = 0;
    while(fgets(Linha, 100, arq) != NULL)
    {
        int valor;

        if(sscanf(Linha, "%d", &valor) == 1)
        {
            v[i] = valor;
            verificar++;
            i++;
        }
        else
            printf("Erro ao ler valor na linha %d\n", i + 1);
    }

    /*printf("\nValores lidos do arquivo:\n");

    for(int j = 0; j < i; j++)
        printf("%d ", v[j]);

    printf("\n");*/

    verificarPositivos(v, n, &verificar);
    verificarPrimo(v, n, &verificar);

    printf("\n\nContem %d numeros no arquivo.\n", n);
    printf("\nForam feitas %d verificacoes.\n", verificar);

    free(v);
    fclose(arq);

    return 0;
}



