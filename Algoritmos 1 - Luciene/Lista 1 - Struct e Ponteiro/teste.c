#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Fun��o para verificar se um n�mero � primo
int ehPrimo(int num) {
    if (num <= 1) return 0; // N�meros menores ou iguais a 1 n�o s�o primos
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0; // Se for divis�vel por algum n�mero al�m de 1 e ele mesmo, n�o � primo
    }
    return 1;
}

int main() {
    FILE *arquivo;
    arquivo = fopen("numero45.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int numeros[20];
    int numElementos = 0;

    // Ler n�meros do arquivo usando um loop for
    for (numElementos = 0; numElementos < 20; numElementos++) {
        if (fscanf(arquivo, "%d", &numeros[numElementos]) == EOF) {
            break;
        }
    }

    fclose(arquivo);

    // Verificar se todos os n�meros s�o positivos
    int todosPositivos = 1;
    for (int i = 0; i < numElementos; i++) {
        if (numeros[i] <= 0) {
            todosPositivos = 0;
            break;
        }
    }

    // Verificar se algum n�mero � primo
    int algumPrimo = 0;
    for (int i = 0; i < numElementos; i++) {
        if (ehPrimo(numeros[i])) {
            algumPrimo = 1;
            break;
        }
    }

    // Exibir resultados
    printf("N�mero de elementos no arquivo \"numeros.txt\": %d\n", numElementos);
    printf("N�mero de verifica��es realizadas: %d\n", numElementos + numElementos); // Uma verifica��o para cada condi��o

    if (todosPositivos) {
        printf("Todos os n�meros s�o positivos.\n");
    } else {
        printf("Todos os n�meros n�o s�o positivos.\n");
    }

    if (algumPrimo) {
        printf("H� um n�mero primo.\n");
    } else {
        printf("N�o h� n�meros primos.\n");
    }

    return 0;
}
