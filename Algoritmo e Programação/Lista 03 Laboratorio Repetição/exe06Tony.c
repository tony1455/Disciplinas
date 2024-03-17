#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,refeicao,cont1=0,cont2=0,cont3=0;

    for(i=1;i<=10;i++)
    {
        do
        {
            printf("Informe o numero de refeicoes: ");
            scanf("%d", &refeicao);

            if(refeicao <=0)
            {
                printf("Numero de refeicao invalido");
            }
            else if(refeicao < 10)
            {
                cont1 = cont1 + 1;
            }
            else if(refeicao >= 10 && refeicao <=20)
            {
                cont2 = cont2 + 1;
            }
            else
            {
                cont3 = cont3 + 1;
            }
        }while(refeicao <= 0);
    }
    printf("\nTotal de Alunos com menos de 10 refeicao: %d\n", cont1);
    printf("\nTotal de Alunos entre 10 e 20 refeicao: %d\n", cont2);
    printf("\nTotal de Alunos com mais de 20 refeicao: %d\n", cont3);

    return 0;
}
