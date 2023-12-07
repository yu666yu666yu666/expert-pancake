#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i;
    int *p=(int *)malloc(6*sizeof(int));
    int *q;
    for(i=0,q=p;i<6;i++,q++)
    {
        scanf("%d",q);
    }
    for(i=0,q=p;i<6;i++,q++)
    {
        printf("%d",*q);
    }
    return 0;
}