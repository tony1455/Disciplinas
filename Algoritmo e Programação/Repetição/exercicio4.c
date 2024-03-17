#include <stdio.h>

int main(void)
{
    int idade=1, contBras=0, contEstr=0, contBSCS=0, somaBSCS=0;
    int menorIdade=0, primeiro=0, contECCS=0;
    char nacio,curso;
    float media;

    while(idade > 0)
    {
        printf("\nInforme sua Idade: ");
        scanf("%d", &idade);

        if(idade > 0)
        {
            do
            {
                printf("\nInforme sua Nacionalidade (B - brasilero ou E - Estrangeiro: ");
                setbuf(stdin,NULL);
                scanf("%c", &nacio);

                if(nacio != 'b' && nacio != 'B' && nacio != 'E' && nacio != 'e')
                {
                    printf("Caracteres Invalido\n");
                }

            }while(nacio != 'b' && nacio != 'B' && nacio != 'E' && nacio != 'e');

                do
                {
                    setbuf(stdin,NULL);
                    printf("\nInforme o curso superior(S - sim ou N - nao): ");
                    scanf("%c", &curso);

                    if(curso != 'S' && curso != 's' && curso != 'N' && curso != 'n')
                    {
                        printf("Caracteres Invalido\n");
                    }
                }while(curso != 's' && curso != 'S' && curso != 'N' && curso != 'n');

                if(nacio =='B' || nacio == 'b')
                {
                    contBras++;

                    if(curso == 'N' || curso == 'n')
                    {
                        contBSCS++;
                        somaBSCS == somaBSCS + idade;
                    }
                }
                else
                {
                    contEstr++;

                    if(curso == 'S' || curso == 's')
                    {
                        contECCS++;

                        if(primeiro == 0)
                        {
                            primeiro = 1;
                            menorIdade = idade;

                        }
                        else
                        {
                            if(idade < menorIdade)
                            {
                                menorIdade = idade;
                            }
                        }
                    }
                }
            }
       }

    printf("\n=== Quantidade de Brasileiros: %d ===\n", contBras);
    printf("\n=== Quantidade de Estrangeiros: %d ===\n", contEstr);

    if(contBras > 0)
    {
        media = (float)somaBSCS / contBSCS;
        printf("=== Media dos brasileiros sem curso superior: %.1f === \n", media);
    }
    else
    {
        printf("\n === Nao existe brasileiros sem curso superior === ");
    }
    if(contECCS > 0)
    {
          printf("\n === Menor idade de estrangeiros sem curso superior eh: %d ===", menorIdade);
    }

    else
    {
        printf("\n === Nao existe estrangeiros sem curso superior\n ===");
    }


    return 0;
}
