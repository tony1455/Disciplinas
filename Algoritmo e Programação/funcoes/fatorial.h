//calcular o fatorial de um numero
int calcularFat(int num)
{
    int i, fat=1;

    for(i=num; i>=2; i--)
    {

        fat = fat * i;
    }
    return(fat);
}

//mostrar o fatorial d eum numero
void(mostraFat(int num, int fat))
{
    int i;

    printf("%d! = ", num);

    for(i=num; i>=2; i--)
    {
        printf("%d * ", i);
    }

    printf("1 = %d\n", fat);
}
