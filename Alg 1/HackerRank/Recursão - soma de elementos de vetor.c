Implemente uma função recursiva que retorne a soma de todos os elementos de um vetor.

Input Format

Na primeira linha, ler o tamanho do vetor.

Na segunda linha, ler os elementos do vetor.

Constraints

.

Output Format

Imprimir o resultado da soma de todos os elementos do vetor.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int somatorio_de_vetor(int vet[],int n)
{
    if(n == 0)
        return 0;
    else
        return vet[n - 1] + somatorio_de_vetor(vet,n - 1);
}
int main() {

    int n;
    scanf("%d", &n);

    int vet[n];

    for(int i = 0 ; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    int resul = somatorio_de_vetor(vet, n);

    printf("%d", resul);

    return 0;
}

