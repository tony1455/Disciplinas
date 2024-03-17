int verificarSEeTriangular(int num)
{
    int i, resultado=0;

    for(i=1; i<=num; i++)
    {
        if(i*(i+1)*(i+2) == num)
        {
            resultado = 1;
            printf("%d eh triangular ==> %d * %d * %d = %d\n", num,i, i+1, i+2, num);
            break;
        }
        else
        {
            printf("Nao eh um triangulo!");
            break;
        }

    }
    return(resultado);
}
 int MostrarnumerostriangularesnoIntervalos(int limiInfer, int limiSuper)
 {
     int i, cont;

     for(i=limiInfer; i<=limiSuper; i++)
     {
         cont++;
         if(i*(i+1)*(i+2) == cont)
         {
              printf("%d eh triangular ==> %d * %d * %d = %d\n", cont,i, i+1, i+2, cont);
              break;

         }
     }
     return 0;
 }
