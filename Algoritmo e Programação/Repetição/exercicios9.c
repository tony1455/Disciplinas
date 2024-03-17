#include <stdio.h>

int main(void)
{
    int num,soma=0, cont1=0,cont2=0, cont3=0,cont4=0,cont5=0,cont6=0;


    do
    {


        printf("Informe um numero(negativo para finalizar): ");
        scanf("%d", &num);
        if(num>=0)
        {
            if(num<10 || num>100)
            {
                cont1++;
            }
            if(num%2 !=0 && num%2 !=0)
            {
                cont2++;
            }
            if(num%10 == 0)
            {
                cont3++;
            }
            if(num>10 && num<100)
            {
                cont4++;
            }
            if(num == 30)
            {
                cont5++;
            }
            if(num!=10 && num!=20 && num!=30)
            {
                cont6++;
            }
        }



    }while(num>=0);




    printf("\nA quantidade de numeros menores que 10 ou maiores que 100 eh: %d\n",cont1);
    printf("\nA quantidade de numeros impares eh: %d\n",cont2);
    printf("\nA quantidade de numeros divisiveis por 10 eh: %d\n",cont3);
    printf("\nA quantidade de numeros entre 10 e 100 eh: %d\n",cont4);
    printf("\nO numero de vezes foi informado o numero 30 eh: %d\n",cont5);
    printf("\nA quantidade de vezes que foi informado um numero diferente de 10, de 20 e de 30: %d\n",cont6);

    return 0;
}
