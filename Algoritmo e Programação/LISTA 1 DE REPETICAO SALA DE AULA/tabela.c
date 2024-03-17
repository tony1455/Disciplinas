#include <stdio.h>

int main(void)
{
    char ch;

    printf("Informe um caracteres: ");
    scanf("%c", &ch);

    printf("\nCaracterer digitado: %c\n", ch);
    printf("\nDecimal do caracterer digitado: %d\n", ch);

    if(ch%2 == 0)
    {
        printf("%d eh par\n", ch);
    }
    else
    {
        printf("\n%d eh impar\n", ch);
    }

    return 0;
}
