#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i;
    int *p=(int *)malloc(3*sizeof(int));
    int *q;
    for(i=0,q=p;i<3;i++,q++)
    {
        scanf("%d",q);
    }
    for(i=0,q=p;i<3;i++,q++)
    {
        printf("%d",*q);
    }
    return 0;
}