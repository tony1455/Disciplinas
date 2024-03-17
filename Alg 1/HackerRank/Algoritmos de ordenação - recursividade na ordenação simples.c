Implemente, utilizando recursão, um dos algoritmos de ordenação simples apresentados em sala de aula (bublesort, selection sort ou insertion sort).

Input Format

Na primeira linha deve ser lido o tamanho do vetor. Na segunda linha devem ser lidos os elementos do vetor.

Constraints

Dica: para os códigos apresentados em aulas, transforme apenas o for externo em recursão. Em outras palavras, no seu código pode ter, no máximo, apenas um laço for.

Output Format

Imprimir o vetor ordenado.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void selectsorft(int *v, int i, int n){
    int j, p, aux;

    if(i < n - 1){
        p = i;

        for(j = i + 1; j < n; j++)
            if(v[j] < v[p])
                p = j;

        if(p != i){
            aux = v[p];
            v[p] = v[i];
            v[i] = aux;
        }

        selectsorft(v, i + 1, n);
    }
}

int main() {
    int i, n, *v;

    scanf("%d", &n);

    v = malloc(sizeof(int) * n);

    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);

    selectsorft(v, 0, n);

    for(i = 0; i < n; i++)
        printf("%d ", v[i]);

    free(v);

    return 0;
}

