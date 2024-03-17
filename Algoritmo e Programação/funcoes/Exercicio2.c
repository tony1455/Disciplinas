/*Fazer uma fun��o que verifica se um n�mero � retangular. Um n�mero � retangular se ele pode ser obtido
a partir da soma de uma sequ�ncia de n�meros pares, iniciando em 2. Por exemplo: 30 � retangular porque
resulta da soma de 2 + 4 + 6 + 8 + 10. Utilizar essa fun��o para:
a) Verificar se um n�mero, informado pelo usu�rio, � retangular.
b) Mostrar quais n�meros de um intervalo s�o retangulares*/

#include <stdio.h>

void verificarSEeRetangular(int num)
{
    int i,j,cont=0,soma=0;

    if(num == 2)
    {
        printf("%d eh retangular ==> %d = %d\n", num,num,num);
    }
    else
    {
        for(i=2; soma<=num; i=i+2)
        {
            soma = soma + i;

            if(soma==num)
            {
                printf("%d eh retangular ==>", soma,i);

                for(j=2; j<=soma; j=j+2)
                {
                    cont = cont + j;

                    if(cont>soma)
                    {
                        printf(" = %d\n", num);
                        break;
                    }
                    else
                    {
                        if(j==2)
                        {
                            printf(" %d", j);
                        }
                        else
                        {
                            printf(" + %d", j);
                        }
                    }
                }
                break;
            }
        }
    }
}


int main(void)
{
    int num, limiInfe, limiSuper,i;
    char opcao;

    do
    {
        printf("1 - Verificar se um numero eh retangular\n");
        printf("2 - Mostrar os numeros retangulares pertencem a um intervalo\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao >=1 && opcao <=2)
        {
            switch(opcao)
            {
                case 1:

                printf("Informe um numero: ");
                scanf("%d", &num);
                verificarSEeRetangular(num);
                break;

                case 2:

                printf("Informe um limite inferior: ");
                scanf("%d", &limiInfe);
                printf("Informe um limite Superior: ");
                scanf("%d", &limiSuper);

                for(i=limiInfe; i<=limiSuper; i++)
                {
                    verificarSEeRetangular(i);
                }
                break;

                default:

                printf("Acesso Invalido");
            }
        }
        setbuf(stdin,NULL);
        printf("\nDeseja repetir o programa? (S/s)");
        scanf("%c", &opcao);

    }while(opcao == 's' || opcao == 'S');

    return 0;
}
