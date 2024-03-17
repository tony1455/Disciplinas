#include <stdio.h>

float media(float nota1,float nota2); //prototipo

int main(void)
{
    float nota1,nota2;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    if(media(nota1,nota2) >= 6)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Reprovado\n");
    }
    return 0;
}

float media(float nota1,float nota2)
{
    float med;
    {
        med = (nota1 + nota2)/2;

        return(med);
    }

}
