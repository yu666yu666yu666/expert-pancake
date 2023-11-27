/* 6.14 */
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double n,a[8],b[8];
    for(int i=0;i<=7;i++)
    {
        scanf("%lf ",&n);
        a[i]=n;
    }
    b[0]=a[0];
    for(int i=1;i<=7;i++)
    {
        b[i]=a[i]+b[i-1];
    }
    for(int i=0;i<=7;i++)
    {
        printf("%lf ",a[i]);
    }
    printf("\n");
    for(int i=0;i<=7;i++)
    {
        printf("%lf ",b[i]);
    }
    return 0;
}