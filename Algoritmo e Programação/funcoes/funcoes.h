void tabuada(int num)
{
    int i;

    printf("=== TABUADA DE %d ===\n",num);
    for(i=0;i<=10; i++)
    {
        printf("%d * %d = %d\n", num, i , num*i);
    }
}

int primo(int num)
{
    int i,contDiv=0;

    for(i=2; i<num; i++)
    {

        if(num%i == 0)
        {
            contDiv++;
            break;
        }


    }
    return(contDiv);
}
