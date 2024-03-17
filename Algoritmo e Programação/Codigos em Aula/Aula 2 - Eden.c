#include <stdio.h>
#include <stdlib.h>
#define CIDADE "Pato Branco"
#define BAIRRO "Centro de Eventos"
#define VALOR 10
#define SOMA 5.0
#define LETRA 'E'

int main()
{
   printf("\n Cidade: %s \n", CIDADE);
   printf("\n Bairro: %s \n", BAIRRO);
   printf("\n Valor: %.2f \n", VALOR + SOMA);
   printf("\n Soma: %.2f \n", SOMA + VALOR);
   printf("\n Letra: %c \n", LETRA + VALOR);

    return 0;
}
