void geraNumeros(int vetor[],int tamanho,int limite,int semente)
{
    int i=0,j,tem=0;
    srand(time(NULL)+semente);
    do
    {
        vetor[i] = rand() % limite;
        tem =0;
        for(j=0;j<i;j++)
        {
            if(vetor[j] == vetor[i])
            {
                tem = 1;
            }
        }
        if(tem == 0)
        {
            i++;
        }

    }while(i<tamanho);

}
void mostraVetor(int vetor[],int tamanho)
{
    int i;
    for(i=0;i<tamanho;i++)
    {
        printf("%3d ",vetor[i]);
    }
}
