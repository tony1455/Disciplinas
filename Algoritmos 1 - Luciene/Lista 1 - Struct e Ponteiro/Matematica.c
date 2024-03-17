#include <stdio.h>
#include <stdlib.h>
void verificarPositivos(int *v, int n, int *verificar){

    if(v != NULL){
        int existeP = 0;
        int existeN = 0;
        int todosP = 0;
        int todosN = 0;

        for(int i = 0; i < n; i++){

            if(v[i] > 0){
                existeP = 1;
                todosP++;
                verificar++;
            }
            else
                existeN = 1;
                todosN++;
                verificar;
        }
        if((existeP) &&(todosP == n))
            printf("\nTodos os numeros sao positivo");
        else if((existeN) && (todosN))
            printf("\nTodos os numeros nao sao positivo\n\n");
    }

}
int main ()
{
    int verificar = 0;
    FILE *arq;

    arq = fopen("numero45.txt", "r");

    if(arq == NULL)
        printf("Erro abrindo arquivo.\n");
    else
        printf("Arquivo Aberto com Sucesso!\n\n");

    int aux;
    int v[100];
    int i = 0;

    while((fscanf(arq, "%d ", &aux))!= EOF){
        v[i] = aux;
        i++;
    }
    for(int j = 0; j < i; j++)
        printf("%d ", v[j]);

    printf("\n\nO Arquivo tem %d numeros\n\n", i);

    int cont = 0;
    while((fscanf(arq, "%d ", &aux))!= EOF){
        v[i] = aux;
        i++;
        verificar++;    }
    for(int j = 0; j < i; j++){
        if(v[j]%i == 0)
            cont++;
            verificar++;
        if(cont == 2)
            printf("Algum numero e primo\n");
    }

    verificarPositivos(v,20,&verificar);
    printf("Nao tem numeros primos\n");
    printf("\nNumero de realizacao feitas foi de %d vezes\n", verificar);

    fclose(arq);

    return 0;
}
