Implemente uma função que receba dois números inteiros, sendo uma para o tamanho do vetor (n) e a outra para razão (r). A função deverá retornar um vetor de tamanho n ordenado de forma crescente representado uma sequência de elementos de uma progressão aritmética iniciada por 0.

Para a implementação da solução, considere o protótipo de função abaixo:

int * prog_arit(int n, int r);

Input Format

Na primeira linha devem ser lidos dois números inteiros, sendo o primeiro referente ao tamanho do vetor e o segundo, à razão da progressão aritmética.

Constraints

.

Output Format

Vetor que represente uma sequência de elementos de uma progressão aritmética.


#include <stdlib.h>
#include <stdio.h>
//malloc
/*int main()
{
    int *p = (int*) malloc(sizeof(int));
    int n = 6;
    int *v = (int*) malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++)
    {
        v[i] = i + 1;
        printf("%d ", v[i]);
    }

    *p = 2;

    printf("%d", *p);

    return 0;
}
*/

//calloc
/*int main()
{
    int *p = (int*) calloc(1,sizeof(int));
    int n = 6;
    int *v = (int*) calloc(n,sizeof(int));

    for(int i = 0; i < n; i++)
    {
        v[i] = i + 1;
        printf("%d ", v[i]);
    }

    *p = 2;

    printf("%d", *p);

    return 0;
}
*/
//realloc
int main()
{
    int *p = (int*) calloc(1,sizeof(int));
    int n = 6;
    int *v = (int*) calloc(n,sizeof(int));

    free(p);
    free(v);

    return 0;
}
