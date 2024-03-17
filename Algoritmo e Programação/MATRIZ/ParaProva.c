//matrizes.h
void gerarMatrizInteiro(int linha,int coluna, int matriz[linha][coluna],int limite)
{
    int i,j;
    srand(time(NULL));
    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            matriz[i][j] = rand()%limite+1;
        }
    }
}
void MostrarMatrizInteiro(int linha,int coluna,int matriz[linha][coluna])
{
    int i,j;
    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            printf("%3d ",matriz[i][j]);
        }
        printf("\n");
    }
}
void gerarMatrizNegativo(int linha,int coluna,int matriz[linha][coluna],int limite)
{
    int i,j;
    srand(time(NULL));
    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            matriz[i][j] = (rand() % limite) - 9;
        }
    }
}
void gerarMatrizZero(int linha,int coluna,int matriz[linha][coluna],int limite)
{
    int i,j;
    srand(time(NULL));
    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            matriz[i][j] = (rand() % limite);
        }
    }
}
void OrdenaVetorInteiro(int vetor[],int tamanho)
{
    int i,j,aux;

    for(j=tam-1;j>0;j--)
    {
        for(i=0;i<j;i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
}
void gerarVetorde0alimite(int vetor[], int tamanho, int limite)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand()% (limite+1);
    }
}
void mostraVetor(int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%d\t", vetor[i]);
    }
}
void gerarVetorde1alimite(int vetor[], int tamanho, int limite)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tamanho; i++)
    {
        vetor[i] = rand()% limite + 1;
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matriz.h"
#define TAM 3
#define LIM 10

int main()
{
    char op;
    int matriz[TAM][TAM],i,j,somaTodos,somaPrincipal,somaSecundaria;
    do
    {
        gerarMatrizInteiros(TAM,TAM,matriz,LIM);
        printf("=== MATRIZ ===\n");
        mostrarMatrizInteiros(TAM,TAM,matriz);

        somaTodos = 0;
        somaPrincipal = 0;
        somaSecundaria = 0;

        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                if(i==j)
                {
                    somaPrincipal = somaPrincipal + matriz[i][j];
                }
                somaTodos = somaTodos + matriz[i][j];
                if(i+j == TAM - 1)
                {
                    somaSecundaria = somaSecundaria + matriz[i][j];
                }
            }
        }
        printf("\nA soma dos elementos da diagonal secundaria: %d", somaSecundaria);
        printf("\nA soma dos elementos da diagonal principal: %d", somaPrincipal);
        printf("\nA soma de todos elementos: %d", somaTodos);

        printf("\n\nDeseja rpetir o programa(S/s)? ");
        setbuf(stdin,NULL);
        scanf("%c", &op);
        system("cls");
    }while(op == 's' || op == 'S');


    return 0;
}
//Matrizes para soma de numeros negativos
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matriz.h"
#define TAM 3
#define LIM 19

int main()
{
    char op;
    int matriz[TAM][TAM],i,j,contNeg;
    do
    {
        gerarMatrizNegativo(TAM,TAM,matriz,LIM);
        printf("=== MATRIZ ===\n");
        mostrarMatrizInteiros(TAM,TAM,matriz);
        contNeg=0;
        for(i=0;i<TAM;i++)
        {
            for(j=0;j<TAM;j++)
            {
                if(matriz[i][j] < 0)
                {
                    contNeg = contNeg + 1;
                }
            }
        }
        printf("\n");
        printf("Quantidade de numeros negativos = %d\n", contNeg);

        printf("\n\nDeseja rpetir o programa(S/s)? ");
        setbuf(stdin,NULL);
        scanf("%c", &op);
        system("cls");
    }while(op == 's' || op == 'S');


    return 0;
}
int OcorreNoVetor(int vetor[],int tamanho,int valor)
{
    int i, cont=0;
    for(i=0; i<tamanho;i++)
    {
        if(vetor[i] == valor)
        {
            cont++;
        }
    }
    return(cont);
}
/*Gerar elementos inteiros e aleat ́orios entre 1 e 25 em um vetor de tamanho 15.
Gerar outros dois vetores, um contendo os valores pares e outro os  ́ımpares e mostrar os trˆes vetores.*/
#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"
#define TAM 15
#define LIM 25
int main()
{
    char continuar;
    do
    {
        int vetor[TAM],i,j=0,x=0,y=0,k=0,contPar[TAM],contImpar[TAM];

        gerarVetorde1alimite(vetor,TAM,LIM);

        printf("=== VETOR ===\n");
        for(i=0;i<TAM;i++)
        {
            printf("%d\t", vetor[i]);

                if(vetor[i]%2 == 0)
                {
                    contPar[j] = vetor[i];
                    x++;
                    j++;
                }
                else
                {
                    contImpar[k] = vetor[i];
                    y++;
                    k++;
                }
        }
        printf("\n=== VETOR PARES ===\n");
        for(i=0; i<j; i++)
        {
            printf("%d\t", contPar[i]);
        }
        printf("\n=== VETOR IMPAR ===\n");

        for(i=0; i<k; i++)
        {
            printf("%d\t", contImpar[i]);
        }

        printf("\n\nDeseja continuar no programa(S/s)? ");
        setbuf(stdin,NULL);
        scanf("%c", &continuar);
        system("cls");
    }while(continuar == 's'|| continuar == 'S');

    return 0;
}
/*Gerar valores inteiros aleat ́orios nos vetores A e B, sendo A com n elementos
entre 1 e 20 e B com n elementos entre 1 e 15. O usu ́ario informa a quantidade de elementos dos
vetores, ou seja, o seu tamanho. Validar para que o tamanho do vetor seja um valor positivo. Mostrar
os elementos dos vetores A e B. Construir um vetor C, em que cada elemento de C ser ́a 1 quando o
elemento de A for maior que o respectivo elemento em B; ser ́a 0 quando o elemento de A for igual ao
respectivo elemento em B; e ser ́a -1 quando o elemento de A for menor que o respectivo elemento em B.
Mostrar os elementos do vetor C.*/

#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"

int main()
{
    char continuar;
    do
    {
        int tamA,tamB,tamanhoMaior,tamanhoMenor,i;
        do
        {
            printf("Informe o tamanho do vetor A: ");
            scanf("%d", &tamA);
            if(tamA<0)
                printf("Valor invalido! Numero menor que zero");
        }while(tamA<0);
        do
        {
            printf("Informe o tamanho do vetor B: ");
            scanf("%d", &tamB);
            if(tamB<0)
                printf("Valor invalido! Numero menor que zero");
        }while(tamB<0);

        int vetorA[tamA],vetorB[tamB];

        gerarVetorde1alimite(vetorA, tamA, 20);
        gerarVetorde1alimite(vetorB, tamB, 15);

    printf("\n=== VETOR A ===\n");
    mostraVetor(vetorA, tamA);

    printf("\n\n=== VETOR B ===\n");
    mostraVetor(vetorB, tamB);

    if(tamA > tamB)
    {
        tamanhoMaior = tamA;
        tamanhoMenor = tamB;
    }
    else
    {
        tamanhoMaior = tamB;
        tamanhoMenor = tamA;
    }

    int vetorC[tamanhoMaior];

    for(i=0; i<tamanhoMenor; i++)
    {
        if(vetorA[i] > vetorB[i])
        {
            vetorC[i] = 1;
        }
        else if(vetorA[i] < vetorB[i])
        {
            vetorC[i] = -1;
        }
        else
        {
            vetorC[i] = 0;
        }
    }

    if(tamA > tamB)
    {
        for(i=tamanhoMenor; i<tamanhoMaior; i++)
        {
            vetorC[i] = 1;
        }
    }
    else
    {
        for(i=tamanhoMenor; i<tamanhoMaior; i++)
        {
            vetorC[i] = -1;
        }
    }

        printf("\n\n=== VETOR C ===\n");
        mostraVetor(vetorC, tamanhoMaior);

        printf("\n\nDeseja continuar no programa(S/s)? ");
        setbuf(stdin,NULL);
        scanf("%c", &continuar);
        system("cls");

    }while(continuar == 's' || continuar == 'S');



    return 0;
}
void geraNumeros(int vetor[],int tamanho,int limite,int semente)
{
    int i=0,j,tem=0;
    srand(time(NULL)+semente);
    do
    {
        vetor[i] = rand() % limite;
        tem =0;
        for(j=0;j<i;j++)
        {
            if(vetor[j] == vetor[i])
            {
                tem = 1;
            }
        }
        if(tem == 0)
        {
            i++;
        }

    }while(i<tamanho);

}

