/* 6.9 */
#include <stdio.h>
#include <stdlib.h>
double chachuji (double m,double n);

int main ()
{
    double m,n,result;
    while(scanf("%lf %lf",&m,&n)==2)
    {
        result=chachuji (m,n);
        printf("%lf",result);
    }
    return 0;
}
double chachuji (double m,double n)
{
    double c;
    c=(m-n)/(m*n);
    return c;
}