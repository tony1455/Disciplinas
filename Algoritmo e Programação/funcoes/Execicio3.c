/*3) Elaborar uma função que recebe o número de linhas, o número de colunas, um determinado caractere e
desenha um quadrado ou retângulo na tela utilizando o caractere.*/

#include <stdio.h>

void VerificarLinhaeColunaporCaracter(int linha, int coluna, char caracter)
{
    int i, j;

    for(i=1; i<=linha; i++)
    {
        printf("%c ", caracter);

        for(j=1; j<coluna; j++)
        {
            printf("%c ", caracter);
        }
        printf("\n");

    }


}

int main(void)
{
    char caracter, opcao;
    int linha, coluna;
    do
    {
        printf("Informe o numero de linhas: ");
        scanf("%d", &linha);
        printf("Informe o numero de colunas: ");
        scanf("%d", &coluna);
        printf("Informe um caracter: ");
        fflush(stdin);
        scanf("%c", &caracter);


        VerificarLinhaeColunaporCaracter(linha, coluna, caracter);

        setbuf(stdin,NULL);
        printf("\nDeseja repetir o programa? (S/s)");
        scanf("%c", &opcao);

    }while(opcao == 's' || opcao == 'S');

    return 0;
}
