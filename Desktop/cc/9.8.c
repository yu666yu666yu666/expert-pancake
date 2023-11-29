/* 9.8 */
#include <stdio.h>
#include <stdlib.h>
double power(double n, int p); 
int main(void)
{
    double x, xpow;
    int exp;
    puts("Enter a number and the positive integer power to which");
    puts(" the number will be raised.Enter q to quit");
    while (scanf("%lf %d", &x, &exp) == 2)
    {
        if (x == 0 && exp == 0)
            printf("0 to the power 0 is undefined.\n");
        else
        {
            xpow = power(x, exp); 
            printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        }
        puts("Enter next pair of numbers or q to quit.");
    }
    puts(" Bye!");
    system("pause");
    return 0;
}
double power(double n, int p)
{
    double pow = 1;
    int i;
    int  negative=0; 
    if (p == 0)
        return 1;
    if (n == 0)
        return 0;
    if (p < 0)
    {
        p = -p;
        negative = 1;
    }
    else
        negative = 0;
    for (i = 1; i <= p; i++)
        pow *= n;
    if (negative)
        return (1 / pow);
    else
        return pow;
}
