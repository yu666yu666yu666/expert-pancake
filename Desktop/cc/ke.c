#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
int main ()
{
    int i;
    int *p=(int *)malloc(7*sizeof(int));
    int *q;
    for(i=0,q=p;i<7;i++,q++)
    {
        scanf("%d",q);
    }
    for(i=0,q=p;i<7;i++,q++)
    {
        printf("%d",*q);
    }
    return 0;
}