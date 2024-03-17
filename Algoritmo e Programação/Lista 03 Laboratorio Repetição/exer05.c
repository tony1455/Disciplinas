/*Uma confec ̧c ̃ao fabrica os produtos da tabela a seguir, identificados pelo seu
c ́odigo e com o pre ̧co correspondente*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pedido, qtd,cont1=0, cont2=0,cont3=0,cont4=0;
    float valor1=17.50,valor2=24.90,valor3=35.00,valor4=12.00, valorT1=0, valorT2=0, valorT3=0, valorT4=0;

    printf("Codigo\tProduto\t\tPreco(USS)\n");
    printf("1\tCamisa Branca\tR$ 17.50\n2\tCamisa colorida\tR$ 24.90\n3\tMoleton\t\tR$ 35.00\n4\tBone\t\tR$ 12.00\n");
    do
    {
        printf("\nInforme o codigo do pedido: ");
        scanf("%d", &pedido);
        if(pedido!=9)
        {
            printf("Informe a quantidade de unidades desejada: ");
            scanf("%d", &qtd);
            for(int i=0; i<qtd; i++)
            {
                switch(pedido)
                {
                case 1:
                    valorT1+=valor1;
                    cont1++;
                    break;
                case 2:
                    valorT2+=valor2;
                    cont2++;
                    break;
                case 3:
                    valorT3+=valor3;
                    cont3++;
                    break;
                case 4:
                    valorT4+=valor4;
                    cont4++;
                    break;
                }
            }
        }



    }while(pedido!=9);


    printf("\nNumero de unidades vendidas de cada produto %d Camisa Branca %d Camiseta Colorida %d Moleton %d Bone\n", cont1,cont2,cont3,cont4);
    printf("\nTotal de unidades vendidas no periodo de cada produto US$%.2f Camisa Branca US$%.2f Camiseta Colorida US$%.2f Moleton US$%.2f Bone\n", valorT1,valorT2,valorT3,valorT4);
    printf("\nTotal de vendas em USS%.2f", valorT1+valorT2+valorT3+valorT4);
    printf("\nNumero de pedidos processados %d", cont1+cont2+cont3+cont4);

    return 0;
}
