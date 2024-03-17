/* O n ́umero 3.025 possui a seguinte caracter ́ıstica: 30 + 25 = 55 e 552 = 3025.
Escreva um programa que escreva todos os n ́umeros com quatro algarismos que possuem a citada
caracter ́ıstica*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,primeiro,segundo,resultado,soma;
    char opcao;

    do
    {
        for(i=1000; i<=9999; i++)
        {
            primeiro = i / 100;
            segundo = i % 100;
            soma = primeiro + segundo;
            resultado = soma * soma;

            if(i==resultado)
            {
                printf("%d \n", resultado);
            }
        }
        setbuf(stdin,NULL);
        printf("Deseja repetir o programa? (S/s)");
        scanf("%c",&opcao);
    }while(opcao == 's'  || opcao == 'S');

    return 0;
}
