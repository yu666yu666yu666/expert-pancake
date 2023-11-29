/* 9.9 */
#include <stdio.h>
#include <stdlib.h>
double power(double n, int p); 
int main(void)
{
    double x, xpow;
    int exp;
    puts("Enter a number and the positive integer power to which");
    puts(" the number will be raised.Enter q to quit");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        if (x == 0 && exp == 0)
            printf("0 to the power 0 is undefined.\n");
        else
        {
            xpow = power(x, exp); 
            printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        }
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Bye!\n");
    system("pause");
    return 0;
}
double power(double n, int p) 
{
    if (p == 0)
        return 1;
    if (n == 0)
        return 0;
    if (p > 0)
        return (n * power(n, p - 1));
    else
        return (1 / n * power(n, p + 1));
}

