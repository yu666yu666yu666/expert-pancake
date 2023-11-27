/* 6.12 */
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n;
    double c,num=1.0;
    while(scanf("%d",&n))
    {
         for(int i=1;i<n;i++)
      {
        c=1.0/(1.0+i);
        if((i+1)%2==0)
        {
            c=-c;
        }
         num+=c;
      }
    printf("%lf",num);
    }
}