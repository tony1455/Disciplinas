/*Ler um n ́umero inteiro positivo (entre 1 e 9). Ler v ́arios n ́umeros inteiros
positivos. O primeiro n ́umero ser ́a utilizado para contar as ocorrˆencias dele no segundo n ́umero. Valide
a entrada do primeiro n ́umero. Quando digitar um n ́umero negativo ou 0 (zero), solicite ao usu ́ario se
ele deseja executar o programa novamente, se S (sim), execute-o, se N (n ̃ao), encerre o programa*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
        int digito, resto, numero, qtd_digitos = 0, aux = 0;
        char opcao;

        do
        {
            printf("Informe um digito: ");
            scanf("%d",&digito);
            printf("\n");

            do
            {
                printf("Informe um numero: ");
                scanf("%d",&numero);
                aux = numero;
                resto = numero % 10;
                if(numero > 0)
                {
                    while(numero > 0)
                    {
                        if(resto == digito)
                        {
                            qtd_digitos = qtd_digitos + 1;
                            numero = (numero - resto)/10;
                            resto = numero % 10;
                        }
                        else
                        {
                            numero = (numero - resto)/10;
                            resto = numero % 10;
                        }
                    }
                    printf(" O numero tem %d digitos iguais a %d\n\n",qtd_digitos,digito);
                }
                else
                {
                   printf("\n");
                }

                qtd_digitos = 0;

            }while(aux > 0);
            printf("\n");
            setbuf(stdin,NULL);
            printf("Deseja repetir o programa? (S/s)");
            scanf("%c",&opcao);


        }while(opcao == 's' || opcao == 'S');





    return 0;
}
