#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Função para verificar se um número é primo
int ehPrimo(int num) {
    if (num <= 1) return 0; // Números menores ou iguais a 1 não são primos
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0; // Se for divisível por algum número além de 1 e ele mesmo, não é primo
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

    // Ler números do arquivo usando um loop for
    for (numElementos = 0; numElementos < 20; numElementos++) {
        if (fscanf(arquivo, "%d", &numeros[numElementos]) == EOF) {
            break;
        }
    }

    fclose(arquivo);

    // Verificar se todos os números são positivos
    int todosPositivos = 1;
    for (int i = 0; i < numElementos; i++) {
        if (numeros[i] <= 0) {
            todosPositivos = 0;
            break;
        }
    }

    // Verificar se algum número é primo
    int algumPrimo = 0;
    for (int i = 0; i < numElementos; i++) {
        if (ehPrimo(numeros[i])) {
            algumPrimo = 1;
            break;
        }
    }

    // Exibir resultados
    printf("Número de elementos no arquivo \"numeros.txt\": %d\n", numElementos);
    printf("Número de verificações realizadas: %d\n", numElementos + numElementos); // Uma verificação para cada condição

    if (todosPositivos) {
        printf("Todos os números são positivos.\n");
    } else {
        printf("Todos os números não são positivos.\n");
    }

    if (algumPrimo) {
        printf("Há um número primo.\n");
    } else {
        printf("Não há números primos.\n");
    }

    return 0;
}
