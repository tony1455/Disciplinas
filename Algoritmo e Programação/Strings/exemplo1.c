#include <stdio.h>
int conCaracteres(char string[]);
int main(void)
{
    char string[40];

    printf("Informe uma string: ");
    gets(string);

    printf("\nQuantidade de Caracteres: %d\n", contaCaracteres(string)-6);

    return 0;
}
int contaCaracteres(char string[])
{
    int i = 0;
    while(string[i] != '\0')
    {
        i++;
    }
    return(i);
}
//int contaCaracteresSemEspaco(char string[]);



