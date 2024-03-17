A soma de dois números inteiros pode ser feita através de sucessivos incrementos, por exemplo, 7 + 4 = (++(++(++(++7)))) = 11. Implemente uma função que calcule a soma entre dois números naturais, através de incrementos, utilizando recursão.

Input Format

Na primeira linha deve ser lido um número inteiro N referente a quantidade de leituras de entradas.

Para cada uma das N próximas linhas, ler dois números inteiros (a e b)

Constraints

.

Output Format

Em cada uma das N linhas, imprimir o resultado da soma dos respectivos números inteiros.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int soma_de_dois_numeros(int a, int b)
{
    if(b == 0)
        return a;
    else
        return soma_de_dois_numeros(a + 1,b - 1);
}

int main() {

   int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int x,y;

        scanf("%d %d", &x,&y);

        int resul = soma_de_dois_numeros(x,y);

        printf("%d\n", resul);
    }


    return 0;
}

