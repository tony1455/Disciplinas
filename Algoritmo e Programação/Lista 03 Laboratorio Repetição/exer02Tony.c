/*Foram obtidas as alturas de 5 crian ̧cas. Fa ̧ca um programa em C para ler as 5
alturas e calcular*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, menorAltura=0, maiorAltura=0, media, soma=0, diferenca, cont=0, contMenorAlt=0, contMaiorAlt=0;
    float perce1,perce2;
    do
    {
        printf("Informe sua altura(m): ");
        scanf("%f", &altura);

        soma = soma + altura;

        if(altura <= 0)
        {
            printf("\nAltura Invalida");
        }
        if(altura < menorAltura)
        {
            menorAltura = altura;
        }
        if(altura > maiorAltura)
        {
            maiorAltura = altura;
        }
        if(altura < 1.0)
        {
            contMenorAlt++;
        }
        if(altura > 1.2)
        {
            contMaiorAlt++;
        }
        if(cont==0)
        {
            maiorAltura = altura;
            menorAltura = altura;
        }
        cont++;
    }while(cont != 5);

    media = soma / (float) cont;
    perce1 = (contMenorAlt * 100) / cont;
    perce2 = (contMaiorAlt * 100) / cont;
    diferenca = maiorAltura - menorAltura;

    printf("\nA menor altura: %.2f\n", menorAltura);
    printf("\nA maior altura: %.2f\n", maiorAltura);
    printf("\nA somatoria das alturas: %.2f\n", soma);
    printf("\nA media eh %.2f\n", media);
    printf("\nO percentual de alturas menores do que 1,0 m: %.2f%%\n", perce1);
    printf("\nO percentual de alturas maiores do que 1,2 m: %.2f%%\n", perce2);
    printf("\nA diferenca entre a maior e a menor altura eh %.2f metros\n", diferenca);

    return 0;
}
