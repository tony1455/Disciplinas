/*Foram obtidas as idades de 7 pessoas. Fa ̧ca um programa em C para ler as 7
idades e calcular:*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade,soma=0, cont=0,idadeMenor=0,idadeMaior=0;
    float media;

    do
    {
        printf("Informe sua idade: ");
        scanf("%d", &idade);
        soma = soma + idade;

        if(idade <= 0)
        {
            printf("Idade Invalida\n");
        }

        if(idade<idadeMenor)
        {
            idadeMenor = idade;
        }
        if(idade>idadeMaior)
        {
            idadeMaior = idade;
        }
        if(cont==0)
        {
            idadeMenor = idade;
            idadeMaior = idade;
        }
        cont++;
    }while(cont != 7);
    media = soma/((float)cont);

    printf("\nA menor idade eh %d\n", idadeMenor);
    printf("\nA maior idade eh %d\n", idadeMaior);
    printf("\nA somatoria das idades eh %d\n", soma);
    printf("\nA media das idades eh %.2f\n", media);

    return 0;
}
