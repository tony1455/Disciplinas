Implemente uma função que receba uma string (str), uma variável do tipo char (c), um ponteiro do tipo int e um ponteiro do tipo float. Na função, a quantidade de vezes que o caratere c aparece na string de entrada deve ser armazenada no ponteiro do tipo int e a taxa de incidência desse caractere dentro da string (quantidade / tamanho da string) deve ser armazenada no ponteiro de float.

Input Format

Na primeira linha deve ser lida uma string.

Na segunda linha, um caractere.

Constraints

A impressão do número real deve ter duas casas decimais.

Output Format

Na primeira linha deve ser impressa a quantidade de caracteres e na segunda, a taxa de incidência desse caractere dentro da string.

Sample Input 0

abcaadcefgda
a

Sample Output 0

4
0.33

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void freq(char *str, char c,int *qtd, float *tx)
{
    int i;
    for(i =0; i < strlen(str); i++)
    {
        if(str[i] == c)
        {
            *qtd = *qtd + 1;
        }
        *tx = (float) *qtd / strlen(str);
    }
}

int main() {

    char str[100];
    char c;
    int qtd=0;
    float tx;
    
    scanf("%s\n", str);
    scanf("%c", &c);
    
    freq(str,c,&qtd,&tx);
    printf("%d\n%.2f",qtd,tx);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
