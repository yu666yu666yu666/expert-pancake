#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main ()
{
    int i;
    int *p=(int *)malloc(4*sizeof(int));
    int *q;
    for(i=0,q=p;i<4;i++,q++)
    {
        scanf("%d",q);
    }
    for(i=0,q=p;i<4;i++,q++)
    {
        printf("%d",*q);
    }
    return 0;
}