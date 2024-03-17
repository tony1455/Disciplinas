/*A s ́erie de Fibonacci  ́e formada pela sequˆencia: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
55, ..., etc.
Observa-se que a partir do terceiro termo da sequˆencia, um termo sempre  ́e formado pela soma dos dois
termos anteriores, por exemplo: [0, 1 = 1] [1, 1 = 2] [1, 2 = 3] [2, 3 = 5] [3, 5 = 8] [5, 8 = 13].
Escreva um programa que gere a s ́erie de Fibonacci at ́e o termo solicitado pelo usu ́ario final*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,termo,fib1=0,fib2=1,fib3;

    scanf("%d", &termo);

    for(i=3; i<=termo;i++)
    {
        fib3 = fib2 + fib1;
        fib1 = fib2;
        fib2 = fib3;
    }
    printf("%do. termo de Fibonacci = %d\n", termo, fib3);
    return 0;
}
