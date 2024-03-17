#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int busca_sequencial_str(char *x, char **vstr, int n)
{
    for(int i = 0; i < n; i++)
        if(strcmp(x, vstr[i]) == 0)
            return i;

    return -1;
}
