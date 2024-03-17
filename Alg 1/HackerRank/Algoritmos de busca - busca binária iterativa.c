Implemente a versão iterativa da busca binária.

Input Format

Na primeira linha deve ser lido o tamanho do vetor. Na segunda linha devem ser lidos os elementos do vetor. Na terceira linha deve ser lido o número de casos de teste (quantidade de chaves que deverão ser procuradas). A partir da próxima linha, as chaves que serão procuradas devem ser lidas.

Constraints

.

Output Format

Para cada chave procurada (caso de teste) deve ser impressa a posição no vetor ou -1 (se não for encontrada).

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int busca_binaria(int x, int *v, int n){
    int ini = 0;
    int fim = n - 1;
    int meio;

    while(ini <= fim){
        meio = (ini + fim)/2;

        if(v[meio] == x)
            return meio;
        else if(x < v[meio])
            fim = meio - 1;
        else
            ini = meio + 1;
    }

    return -1;
}

int main() {
    int n, m, i, x, *v;

    scanf("%d", &n);

    v  = malloc(sizeof(int) * n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    scanf("%d", &m);

    while(m > 0){
        m--;
        scanf("%d", &x);
        printf("%d\n", busca_binaria(x, v, n));
    }

    free(v);

    return 0;
}

