#include<stdio.h>

int main(){

    int s=0,i=0,n;

    scanf("%d", &n);

    while(i<n)
    {
        i = i+1;
        s = s+i;
    }
    printf("%d", s);



    return 0;
}
