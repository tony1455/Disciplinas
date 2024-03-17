void geraMatrizesDe0aLimite(int lin, int col, int matriz[lin][col], int limite)
{
    int i, j;

    srand(time(NULL));

    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            matriz[i][j] = rand()% (limite + 1);
        }
    }
}
void mostraMatriz(int lin, int col, int matriz[lin][col])
{
     int i, j;

    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

