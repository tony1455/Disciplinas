#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main()
{
    char op,texto[100];
    int i,j,vetor[25],cont,k;
    do
    {
        printf("Informe um texto: ");
        setbuf(stdin,NULL);
        fgets(texto,100,stdin);
        i=0;
        cont=0;
        j=0;
        while(texto[i] != '\0')
        {
            if(texto[i]== ' ')
            {
                cont++;
            }
            else if(cont != 0)
            {
                vetor[j] = cont;
                j++;
                cont=0;
            }
            i++;
        }
        if(cont != 0)
        {
            vetor[j] = cont;
            j++;
        }
        printf("\n=== VETOR ===\n");
        mostraVetor(vetor,j);

        OrdenaVetorInteiro(vetor,j);
        printf("\n=== VETOR ORDENADO ===\n");
        mostraVetor(vetor,j);

        cont=0;

        for(i=0;i<j;i++)
        {
            if(i==0 || vetor[i] != vetor[i-1])
            {
                cont++;
            }
        }
        int matriz[cont][2];
        k=0;
        for(i=0;i<j;i++)
        {
             if(i==0 || vetor[i] != vetor[i-1])
            {
                matriz[k][0] = vetor[i];
                matriz[k][1] = OcorreNoVetor(vetor,j,vetor[i]);
                k++;
            }
        }
        printf("\n\n ==== MATRIZ ===\n");
        for(i=0;i<cont;i++)
        {
            printf("%d\t%d\n", matriz[i][0], matriz[i][1]);
        }

        printf("\n\nDeseja rpetir o programa(S/s)? ");
        setbuf(stdin,NULL);
        scanf("%c", &op);
        system("cls");
    }while(op == 's' || op == 'S');


    return 0;
}
