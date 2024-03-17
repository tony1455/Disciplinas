Implemente uma combinação entre o quicksort e um método de ordenação simples. A função deve, pelo menos, receber três parâmetros: vetor de stings (**vstr), tamanho do vetor (n) e um número inteiro representando tamanho mínimo (m). Nessa função, enquanto a partição for maior que m, o método de ordenação que deve ser aplicado é quicksort. Caso contrário, um método de ordenação simples (bubblesort, select sort ou insert sort) deve ser utilizado na partição.

Input Format

Na primeira linha deve ser lido o tamanho do vetor. A partir segunda linha, devem ser lidos os elementos do vetor. Após a leitura do vetor, deve ser lido um número inteiro que represente o tamanho mínimo de partição.

Constraints

.

Output Format

Imprimir o vetor ordenado.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocar(char **a, char **b)
{
    char *aux = *a;
    *a = *b;
    *b = aux;
}

int particionar(char **vstr, int ini, int fim)
{
    char *pivor = vstr[fim];
    int i = ini - 1;

    for (int j = ini; j < fim; j++)
    {
        if (strcmp(vstr[j], pivor) <= 0)
        {
            i++;
            trocar(&vstr[i], &vstr[j]);
        }
    }

    trocar(&vstr[i + 1], &vstr[fim]);

    return i + 1;
}

void insertsort(char **vstr, int ini, int fim)
{
    for (int i = ini + 1; i <= fim; i++)
    {
        char *atual = vstr[i];
        int j = i - 1;

        while (j >= ini && strcmp(vstr[j], atual) > 0)
        {
            vstr[j + 1] = vstr[j];
            j--;
        }

        vstr[j + 1] = atual;
    }
}

void quicksort(char **vstr, int ini, int fim, int m)
{
    while (ini < fim)
    {
        if (fim - ini + 1 > m)
        {
            int pivor = particionar(vstr, ini, fim);

            if (pivor - ini < fim - pivor)
            {
                quicksort(vstr, ini, pivor - 1, m);
                ini = pivor + 1;
            }
            else
            {
                quicksort(vstr, pivor + 1, fim, m);
                fim = pivor - 1;
              }
        }
        else
        {
            insertsort(vstr, ini, fim);
            break;
        }
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    char **vstr = (char **)malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++)
    {
        vstr[i] = (char *)malloc(101 * sizeof(char));
        scanf("%s", vstr[i]);
    }

    int m;

    scanf("%d", &m);

    quicksort(vstr, 0, n - 1, m);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", vstr[i]);
        free(vstr[i]);
    }

    free(vstr);

    return 0;
}
