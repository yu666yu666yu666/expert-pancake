/* 6.18 */
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n=5;
    int i=1;
    while((n-i)*2<=150)
    {
        n=(n-i)*2;
        i++;
        printf("%d\n",n);
    }
    return 0;
}