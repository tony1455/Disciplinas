#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char palavra[20] = "Oitenta";
    printf("Palavra: %s\n", palavra);
    palavra[10] = '\0';
    printf("Palavra: %s\n", palavra);
    system("pause");

    return 0;
}




