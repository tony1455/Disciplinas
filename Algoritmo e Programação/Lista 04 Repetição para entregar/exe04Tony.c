/*Apresentar os n ́umeros primos entre dois valores, que representam os limites
inferior e superior, respectivamente, de um intervalo, informados pelo usu ́ario. Apresent ́a-los com n
n ́umeros por linha. n  ́e informado pelo usu ́ario*/

#include <stdio.h>

int main()
{
    char repetir='s';

       do
    {
        int limSuper=0,liminfer=0,colunas=0,cont=0,i,j,qtd=0;
        do
        {
            printf("Informe o valor do limite inferior do intervalo: ");
            scanf("%d", &liminfer);
        }while(liminfer<=0);
        do
        {
            printf("Informe o valor do Limite Superior do intervalo: ");
            scanf("%d", &limSuper);
        }while(limSuper<=liminfer);
        do
        {
            printf("Informe quantos numeros deseja imprimir por linhas: ");
            scanf("%d", &colunas);
        }while(colunas<=0);
        if(liminfer==1)
        {
            printf("%d\t", liminfer);
            qtd++;
        }
        for(i=liminfer; i<=limSuper; i++)
        {
            cont=0;
            for(j=i; j>=1; j--)
            {
                if((i%j)==0)
                {
                    cont++;
                }
            }
            if(cont==2)
            {
                printf("%d\t",i);
                qtd++;
                if(qtd%colunas==0)
                {
                    printf("\n");
                }
            }
        }
        do
        {
            printf("\n\nDeseja repetir o programa(S ou N)?  ");
            setbuf(stdin, NULL);
            scanf("%c", &repetir);

            if(repetir!='S' && repetir!='s' && repetir!='N' && repetir!='n')
            {
                printf("Opcao Invalida!");
            }
        }while(repetir!='S' && repetir!='s' && repetir!='N' && repetir!='n');

    }while(repetir=='s' || repetir=='S');

    return 0;
}
