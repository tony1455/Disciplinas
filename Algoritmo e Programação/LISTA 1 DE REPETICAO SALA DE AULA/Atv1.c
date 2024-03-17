/*1) Ler um número e ler um dígito. Contar quantos dígitos o número possui. Exemplo:
É informado 5 como dígito:
55 – possui 2 dígitos cinco;
10 – possui nenhum dígito cinco;
1550 – possui dois dígitos cinco;
50050 – possui dois dígitos cinco.
Repetir o programa enquanto informados valores positivos.
*/
#include<stdio.h>


int main (void)
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
