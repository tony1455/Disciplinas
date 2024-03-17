Inplemente uma função recursiva que verifique se uma string é palíndromo.

Input Format

Na primeira linha, deve ser lida uma string.

Constraints

Se a função não for recursiva, será atribuída nota 0 (zero).

Output Format

Imprimir "palindromo" se a string de entrada for palíndromo, ou imprimir "não palindromo", caso contrário.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int eh_palindromo(char str[], int ini, int fim)
{
    if(ini == fim)
        return 1;

    else if(str[ini] != str[fim])
        return 0;
    else
        return eh_palindromo(str, ini + 1, fim - 1);
}

int main() {

    char str[255];

    scanf("%s", str);

    int res = eh_palindromo(str, 0, strlen(str) - 1);

    if (res)
        printf("palindromo");
    else
        printf("nao palindromo");

    return 0;
}

