/*Fazer uma fun��o que verifica se um n�mero � triangular. Um n�mero natural � triangular quando o
produto de tr�s n�meros naturais consecutivos for igual ao pr�prio n�mero. Por exemplo: 120 � triangular,
pois 4 * 5 * 6 = 120. Use essa fun��o para:
a) Verificar se um n�mero, informado pelo usu�rio, � triangular.
b) Mostrar quais n�meros de um intervalo s�o triangulares.
Use menu de op��es e implemente a repeti��o de programa.*/

#include <stdio.h>

int verificarSEeTriangular(int num)
{
    int i=0, resultado=0;

    for(i=1; i<=num; i++)
    {
        if(i*(i+1)*(i+2) == num)
        {
            resultado = 1;
            printf("%d eh triangular ==> %d * %d * %d = %d\n", num,i, i+1, i+2, num);
            break;
        }

    }
    return(resultado);
}



int main(void)
{
    int num, limiInfer,limiSuper,i;
    char opcao;

    do
    {
        printf("1 - Verificar se um numero eh triangular\n");
        printf("2 - Mostrar os numeros triangulares que pertencem a um intervalo\n");
        printf("Escolha uma das opcao: ");
        scanf("%d", &opcao);

        if(opcao >=1 && opcao <=2)
        {

            switch(opcao)
            {
                case 1:
                printf("Informe um numero: ");
                scanf("%d", &num);
                verificarSEeTriangular(num);
                break;

                case 2:
                printf("Informe um limite inferior: ");
                scanf("%d", &limiInfer);
                printf("Informe um limite superior: ");
                scanf("%d", &limiSuper);

                for(i=limiInfer;i<=limiSuper;i++)
                {
                  verificarSEeTriangular(i);
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
