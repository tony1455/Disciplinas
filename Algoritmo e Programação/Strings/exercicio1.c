#include <stdio.h>


int main(void)
{
    char string[20], inversa[20], maiuscula[20], minuscula[20];
    int i=0, j=0, k=0;

    printf("Informe uma string: ");
    gets(string);

    while(string[i] != '\0')
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
        {
            maiuscula[j] = string[i];
            j++;

        }
        else if(string[i] >= 'a' && string[i] <= 'z')
        {
            minuscula[k] = string[i];
            k++;
        }
        i++;

    }
    maiuscula[j] = '\0';
    maiuscula[k] = '\0';
    printf("\nString: %s\n", string);
    printf("String Maiuscula: %s\n", maiuscula);
    printf("String Minuscula: %s\n", minuscula);


    return 0;
}
