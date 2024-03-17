/* calcular f = (sqrt(cos(a)) + sen(b) / exp(d) - log(d))*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, d, f, x, y, z, w, u, v;
    //entrada de dados
    printf("informe o valor de coseno: ");
    scanf("%f", &a);
    printf("informe o valor de seno: ")
    scanf("%f", &b);
    printf("informe o valor do exponecial: ");
    scanf("%f", &c);
    printf("informe o valor de logaritmo: ");
    scanf("%f", &d);
    //processamento

    x = cos(a);
    y = sin(b);
    v = sqrt(x + y);
    z = exp(c);
    w = log(d);
    u = z - w;
    f = v / u;
    //Saida dos Dos Dados

    printf("\n coseno x = %f", x);
    printf("\n seno y = %f", y);
    printf("\n raiz quadrada x y = %f", v);
    printf("\n exponencial z = %f", z);
    printf("\n logaritimo w = %f", w);
    printf("\n z - w = %f", u);
    printf("\n resultado = %f", f);

    return 0;
}
