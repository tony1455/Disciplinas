int primo(int num)
{
    int i, contDiv=0;

    for(i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            contDiv++;
        }
    }

    return(contDiv);
}


