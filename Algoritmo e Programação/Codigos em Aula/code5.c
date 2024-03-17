#include <stdio.h>

int main() {
    int num, produto = 1;


    do {
        scanf("%d", &num);
        if (num != 0) {
            produto *= num;
        }
    } while (num != 0);

    printf("Produto = %d", produto);

    return 0;
}
