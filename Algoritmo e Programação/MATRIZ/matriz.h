//1 - Gerar uma matriz de inteiros aleatorios entre 1 e o limite.
//prototico:
// void gerarMatrizInteiros(int linha, int coluna, int limite,int matriz[linha][coluna])
//2 - Mostrar a matriz
//void mostrarMatrizInteiros(int linha, int coluna, int matriz[linha][coluna])

void gerarMatrizInteiros(int linha, int coluna,int matriz[linha][coluna],int limite)
{
    int i,j;

    srand(time(NULL));

    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            matriz[i][j] = rand() % limite + 1;
        }
    }
}
void mostrarMatrizInteiros(int linha, int coluna, int matriz[linha][coluna])
{
    int i,j;

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
void gerarMatrizInteiros0alim(int linha, int coluna, int limite,int matriz[linha][coluna])
{
    int i,j;

    srand(time(NULL));

    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            matriz[i][j] = rand()%limite;
        }
    }
}
void mostraVetor(int vetor[], int tamanho)
{
    int i;

    for(i=0; i<tamanho; i++)
    {
        printf("%d\t", vetor[i]);
    }
}
void gerarMatrizNegativo(int linha,int coluna,int matriz[linha][coluna],int limite)
{
    int i,j;
    srand(time(NULL));
    for(i=0;i<linha;i++)
    {
        for(j=0;j<coluna;j++)
        {
            matriz[i][j] = (rand() % limite) - 9;
        }
    }
}
void OrdenaVetorInteiro(int vetor[],int tam)
{
    int i,j,aux;

    for(j=tam-1;j>0;j--)
    {
        for(i=0;i<j;i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }
}
int OcorreNoVetor(int vetor[],int tamanho,int valor)
{
    int i, cont=0;
    for(i=0; i<tamanho;i++)
    {
        if(vetor[i] == valor)
        {
            cont++;
        }
    }
    return(cont);
}
